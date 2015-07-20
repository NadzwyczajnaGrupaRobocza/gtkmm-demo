#include "examplewindow.h"
#include "keywordhighlighter.h"
#include <iostream>

ExampleWindow::ExampleWindow()
    : m_VBox(Gtk::ORIENTATION_VERTICAL),
      m_buttonQuit("_Quit", true),
      m_buttonBuffer1("Use buffer 1"),
      m_buttonBuffer2("Use buffer 2")
{
    set_title("Gtk::TextView example");
    set_border_width(15);
    set_default_size(400, 200);

    add(m_VBox);

    // Add the TreeView, inside a ScrolledWindow, with the button underneath
    m_scrolledWindow.add(m_textView);

    // Only show the scrollbars when they are necessary:
    m_scrolledWindow.set_policy(Gtk::POLICY_AUTOMATIC, Gtk::POLICY_AUTOMATIC);

    m_VBox.pack_start(m_scrolledWindow);

    // Add buttons:
    m_VBox.pack_start(m_buttonBox, Gtk::PACK_SHRINK);

    m_buttonBox.pack_start(m_buttonBuffer1, Gtk::PACK_SHRINK);
    m_buttonBox.pack_start(m_buttonBuffer2, Gtk::PACK_SHRINK);
    m_buttonBox.pack_start(m_buttonQuit, Gtk::PACK_SHRINK);

    m_buttonBox.set_border_width(5);
    m_buttonBox.set_spacing(5);
    m_buttonBox.set_layout(Gtk::BUTTONBOX_END);



    // Connect signals:
    m_buttonQuit.signal_clicked().connect(
        sigc::mem_fun(*this,
                      &ExampleWindow::on_button_quit));
    m_buttonBuffer1.signal_clicked().connect(
        sigc::mem_fun(*this,
                      &ExampleWindow::on_button_buffer1));
    // m_buttonBuffer2.signal_clicked().connect(
    //     sigc::mem_fun(*this,
    //                   &ExampleWindow::on_button_buffer2));

    fill_buffers();

    Gdk::RGBA yellow("FFFF00");
    m_yellowBackground = Gtk::TextTag::create();
    m_yellowBackground->property_background_rgba().set_value(Gdk::RGBA("DarkSlateGray"));

    m_refTextBuffer1->get_tag_table()->add(m_yellowBackground);

    // KeywordHighlighter yellowMaker(m_refTextBuffer1);

    auto lambda2 = [this]()
    {
        m_refTextBuffer1->insert_with_tag(m_refTextBuffer1->begin(),
                                          "TEST",
                                          m_yellowBackground);
    };
    m_buttonBuffer2.signal_clicked().connect(lambda2);
        // sigc::mem_fun(yellowMaker,
        //               &KeywordHighlighter::apply_yellow));

    on_button_buffer1();

    auto lambda1 = [this]()
    {
        std::cerr << "LC: " << m_refTextBuffer1->get_line_count()
        << " CC: " << m_refTextBuffer1->get_char_count() << std::endl;
    };

    m_refTextBuffer1->signal_changed().connect(lambda1);

    show_all_children();
}

void ExampleWindow::fill_buffers()
{
    m_refTextBuffer1 = Gtk::TextBuffer::create();
    m_refTextBuffer1->set_text("This is the text from TextBuffer #1");

    m_refTextBuffer2 = Gtk::TextBuffer::create();
    m_refTextBuffer2->set_text(
        "This is some alternative text, from TextBuffer #2.");
}

ExampleWindow::~ExampleWindow()
{
}

void ExampleWindow::on_button_quit()
{
    hide();
}

void ExampleWindow::on_button_buffer1()
{
    m_textView.set_buffer(m_refTextBuffer1);
}

void ExampleWindow::on_button_buffer2()
{
    m_textView.set_buffer(m_refTextBuffer2);
}
