#include "swo.hpp"
#include "form.hpp"

void Application::initialize(void) {

	Form& form = Form::create();
	form.show();

	terminate(-1);
}
