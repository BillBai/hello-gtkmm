#include <gtkmm/application.h>

#include "hello.h"

int main(int argc, char *argv[]) {
  auto app = Gtk::Application::create(argc, argv, "org.gtkmm.hello");
  Buttons buttons;
  return app->run(buttons);
}
