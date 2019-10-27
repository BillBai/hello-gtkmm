#ifndef __HELLO_H_
#define __HELLO_H_

#include <gtkmm/window.h>
#include <gtkmm/button.h>

class Buttons : public Gtk::Window {
public:
  Buttons();
  virtual ~Buttons();

protected:
  //Signal handlers:
  void OnButtonClicked();

  //Child widgets:
  Gtk::Button button_;
};

#endif // __HELLO_H_
