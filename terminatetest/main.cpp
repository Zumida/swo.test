#include "swo.hpp"
#include "form.hpp"

using namespace swo;

void Application::initialize(void) {

	Form& form = Form::create();
	form.show();

	terminate(-1);
}
