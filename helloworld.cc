#include "helloworld.h"
#include <iostream>

Helloworld::Helloworld() : m_button("Hello World")   // Create a button with label "Hello World".
{
	// Sets the border width of the window.
	set_border_width(16);

	// When the button receives the "clicked" signal, it will call the
	// on_button_clicked() method defined below.
	m_button.signal_clicked().connect(sigc::mem_fun(*this,
	                                   &Helloworld::on_button_clicked));

	// Pack the button into the Window container.
	add(m_button);

	// Display this newly created widget
	m_button.show();
}

Helloworld::~Helloworld()
{
}

void Helloworld::on_button_clicked()
{
	std::cout << "Hello World" << std::endl;
}
