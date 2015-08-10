#include "editorwindow.h"
#include <iostream>
#include <fstream>
#include <string>

void load()
{
    string line;
  ifstream myfile("example.txt");
  if (myfile.is_open())
  {
      std::cout << std::endl;
    while ( getline(myfile,line) )
    {
      std::cout << line << '\n';
    }
    myfile.close();
  }

  else std::cout << "Unable to open file";
}

EditorWindow::EditorWindow(const Glib::ustring& window_name,
                           std::shared_ptr<TextTagFactory> tag_factory)
    : m_vbox(Gtk::ORIENTATION_VERTICAL),
      m_button_quit("_Quit", true),
      m_button_add_highlight("Add highlighted text"),
      m_tag_factory(tag_factory),
       d_button_quit("_Quit", true),
      d_button_add_highlight("Load text from a file"),
      d_tag_factory(tag_factory)
{
    set_title(window_name);
    set_border_width(15);
    set_default_size(400, 200);

    add(m_vbox);

    // Add the TreeView, inside a ScrolledWindow, with the button underneath
    m_scrolled_window.add(m_text_view);

    // Only show the scrollbars when they are necessary:
    m_scrolled_window.set_policy(Gtk::POLICY_AUTOMATIC, Gtk::POLICY_AUTOMATIC);

    m_vbox.pack_start(m_scrolled_window);

    // Add buttons:
    m_vbox.pack_start(m_button_box, Gtk::PACK_SHRINK);

    m_button_box.pack_start(m_button_add_highlight, Gtk::PACK_SHRINK);
    m_button_box.pack_start(m_button_quit, Gtk::PACK_SHRINK);

    m_button_box.set_border_width(5);
    m_button_box.set_spacing(5);
    m_button_box.set_layout(Gtk::BUTTONBOX_END);

     d_button_box.pack_start(d_button_add_highlight, Gtk::PACK_SHRINK);
    d_button_box.pack_start(d_button_quit, Gtk::PACK_SHRINK);

    d_button_box.set_border_width(5);
    d_button_box.set_spacing(5);
    d_button_box.set_layout(Gtk::BUTTONBOX_END);

    create_buffer_and_add_sample_text();
    m_text_buffer->get_tag_table()->add(m_tag_factory->get_background_for_search_result());

    auto callback_for_add_highlight_clicked = [this]()
    {
        m_text_buffer->insert_with_tag(m_text_buffer->end(),
                                       "\nTEST", "highlight"//m_tag_factory->get_background_for_search_result()
                                       );
    };

    auto load_text_from_file = [this]()
    {
          m_text_buffer->insert_with_tag(m_text_buffer->end(),
                                       load(), "highlight"
                                       );
    };



    // Connect signals:
    m_button_quit.signal_clicked().connect(
        sigc::mem_fun(*this, &EditorWindow::on_button_quit));
    m_button_add_highlight.signal_clicked().connect(
        callback_for_add_highlight_clicked);

    // create_buffer_and_add_sample_text();
    m_text_view.set_buffer(m_text_buffer);

    auto lambda1 = [this]()
    {
        std::cerr << "LC: " << m_text_buffer->get_line_count()
        << " CC: " << m_text_buffer->get_char_count() << std::endl;
    };

    m_text_buffer->signal_changed().connect(lambda1);

    show_all_children();
}

void EditorWindow::create_buffer_and_add_sample_text()
{
    m_text_buffer = Gtk::TextBuffer::create();
    m_text_buffer->set_text("Hello GUI World!");
}

EditorWindow::~EditorWindow()
{
}

void EditorWindow::on_button_quit()
{
    hide();
}
