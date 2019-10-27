#include "hello.h"

#include <iostream>

Buttons::Buttons() {
  button_.add_pixlabel("info.xpm", "cool button");

  set_title("Pixmap'd buttons!");
  set_border_width(10);

  button_.signal_clicked().connect(
      sigc::mem_fun(*this, &Buttons::OnButtonClicked));

  add(button_);
  
  show_all_children();
}

Buttons::~Buttons() {}

void Buttons::OnButtonClicked() {
  std::cout << "The Button was clicked." << std::endl;
}
