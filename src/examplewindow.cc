#include "examplewindow.h"

ExampleWindow::ExampleWindow()
    : m_VBox(Gtk::ORIENTATION_VERTICAL),
      m_buttonQuit("_Quit", true),
      m_buttonBuffer1("Use buffer 1"),
      m_buttonBuffer2("Use buffer 2")
{
    set_title("Gtk::TextView example");
    set_border_width(5);
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
    m_buttonBuffer2.signal_clicked().connect(
        sigc::mem_fun(*this,
                      &ExampleWindow::on_button_buffer2));

    fill_buffers();
    on_button_buffer1();

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
