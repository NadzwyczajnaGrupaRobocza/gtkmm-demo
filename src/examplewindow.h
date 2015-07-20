#ifndef GTKMM_EXAMPLEWINDOW_H
#define GTKMM_EXAMPLEWINDOW_H

#include <gtkmm.h>

class ExampleWindow : public Gtk::Window
{
public:
    ExampleWindow();
    virtual ~ExampleWindow();

    Glib::RefPtr<Gtk::TextBuffer> get_text_buffer();


protected:
    void fill_buffers();

    // Signal handlers:
    void on_button_quit();
    void on_button_buffer1();
    void on_button_buffer2();

    // Child widgets:
    Gtk::Box m_VBox;

    Gtk::ScrolledWindow m_scrolledWindow;
    Gtk::TextView m_textView;

    Glib::RefPtr<Gtk::TextBuffer> m_refTextBuffer1, m_refTextBuffer2;

    Glib::RefPtr<Gtk::TextTag> m_yellowBackground;
    Gtk::ButtonBox m_buttonBox;
    Gtk::Button m_buttonQuit, m_buttonBuffer1, m_buttonBuffer2;
};

#endif //GTKMM_EXAMPLEWINDOW_H
