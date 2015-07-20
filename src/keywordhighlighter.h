#ifndef KEYWORDHIGHLIGHTER_H
#define KEYWORDHIGHLIGHTER_H

#include <gtkmm.h>

class KeywordHighlighter
{
public:
    KeywordHighlighter(Glib::RefPtr<Gtk::TextBuffer> buffer);
    virtual ~KeywordHighlighter() {}

    void apply_yellow();

private:
    Glib::RefPtr<Gtk::TextBuffer> m_buffer;
};

#endif
