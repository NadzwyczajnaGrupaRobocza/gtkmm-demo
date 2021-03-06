#include "editorwindow.h"
#include "texttagfactoryimpl.h"
#include <gtkmm/application.h>
#include <iostream>
int main(int argc, char *argv[])
{
    Glib::RefPtr<Gtk::Application> app =
        Gtk::Application::create(argc, argv, "org.gtkmm.example");

    EditorWindow window("EDITOR",
                        std::make_shared<TextTagFactoryImpl>());

    // Show the window and returns when it is closed.

    std::cout << "Przykladowa zmiana programu." << std::endl;
    std::cout << "Przykladowa zmiana programu 2.0" << std::endl;

    return app->run(window);
}
