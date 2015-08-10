#ifndef EDITORWINDOW_H
#define EDITORWINDOW_H

#include <gtkmm.h>
#include "texttagfactory.h"
#include <memory>

class EditorWindow : public Gtk::Window
{
public:
    EditorWindow(const Glib::ustring& window_name,
                 std::shared_ptr<TextTagFactory> tag_factory);
    virtual ~EditorWindow();

    Glib::RefPtr<Gtk::TextBuffer> get_text_buffer();


private:
    void create_buffer_and_add_sample_text();

    // Signal handlers:
    void on_button_quit();

    // Child widgets:
    Gtk::Box m_vbox;

    Gtk::ScrolledWindow m_scrolled_window;
    Gtk::TextView m_text_view;

    Glib::RefPtr<Gtk::TextBuffer> m_text_buffer;

    Gtk::ButtonBox m_button_box, d_button_box;
    Gtk::Button m_button_quit, m_button_add_highlight, d_button_quit, d_button_add_highlight;

    std::shared_ptr<TextTagFactory> m_tag_factory;
};

#endif // EDITORWINDOW_H
