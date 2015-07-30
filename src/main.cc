#include "examplewindow.h"
#include <gtkmm/application.h>
#include <iostream>
int main(int argc, char *argv[])
{
    Glib::RefPtr<Gtk::Application> app =
        Gtk::Application::create(argc, argv, "org.gtkmm.example");

    ExampleWindow window;

    // Show the window and returns when it is closed.

    std::cout << "Przykladowa zmiana programu." << std::endl;

    return app->run(window);
}
