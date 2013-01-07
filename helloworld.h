#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>

class Helloworld : public Gtk::Window
{
public:
	Helloworld();
	virtual ~Helloworld();

protected:
	// Signal handlers:
	void on_button_clicked();

	Gtk::Button m_button;
};

#endif
