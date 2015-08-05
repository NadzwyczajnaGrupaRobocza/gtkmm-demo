#ifndef TEXTTAGFACTORYIMPL_H
#define TEXTTAGFACTORYIMPL_H

#include <gtkmm.h>
#include "texttagfactory.h"

class TextTagFactoryImpl : public TextTagFactory
{
public:
    TextTagFactoryImpl();
    virtual ~TextTagFactoryImpl() {}

    virtual Glib::RefPtr<Gtk::TextTag> get_background_for_search_result() override;

};

#endif // TEXTTAGFACTORYIMPL_H
