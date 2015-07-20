#include "keywordhighlighter.h"
#include <iostream>

KeywordHighlighter::KeywordHighlighter(Glib::RefPtr<Gtk::TextBuffer> buffer)
    : m_buffer(buffer)
{
}

void KeywordHighlighter::apply_yellow()
{
    Gdk::RGBA yellow("FFFF00");
    Glib::RefPtr<Gtk::TextTag> yellowBackground = Gtk::TextTag::create();
    yellowBackground->property_background_rgba().set_value(yellow);
    std::cout << "in apply yellow" << std::endl;
    m_buffer->get_tag_table()->add(yellowBackground);
    //const Glib::ustring bufText = m_buffer->get_text();
    //std::cout << bufText << std::endl;
    // m_buffer->apply_tag(yellowBackground,
    //                     m_buffer->begin(),
    //                     m_buffer->begin().forward_char());
    m_buffer->insert_with_tag(m_buffer->begin(),
                              "DUPA",
                              yellowBackground);
}
