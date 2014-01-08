#include "swo.hpp"
#include "form.hpp"
#include <exception>

using namespace swo;

void Application::initialize(void) {

	Form& form = Form::create();
	form.show();

	throw std::exception();
}
