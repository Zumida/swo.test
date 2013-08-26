#include "swo.hpp"
#include "form.hpp"
#include <exception>

void Application::initialize(void) {

	Form& form = Form::create();
	form.show();

	throw std::exception();
}
