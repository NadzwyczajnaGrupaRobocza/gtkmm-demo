#include "texttagfactoryimpl.h"
#include <iostream>

TextTagFactoryImpl::TextTagFactoryImpl()
{
}

Glib::RefPtr<Gtk::TextTag> TextTagFactoryImpl::get_background_for_search_result()
{
    Gdk::RGBA yellow("#ffff00");
    Glib::RefPtr<Gtk::TextTag> yellowBackground = Gtk::TextTag::create("highlight");
    yellowBackground->property_background_rgba().set_value(yellow);

    return yellowBackground;
}
