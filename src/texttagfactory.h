#ifndef TEXTTAGFACTORY_H
#define TEXTTAGFACTORY_H

#include <gtkmm.h>

class TextTagFactory
{
public:
    virtual ~TextTagFactory() {}

    virtual Glib::RefPtr<Gtk::TextTag> get_background_for_search_result() = 0;
};

#endif // TEXTTAGFACTORY_H
