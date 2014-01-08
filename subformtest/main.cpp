#include "swo.hpp"
#include "form.hpp"

using namespace swo;

void Application::initialize(void) {

	Form& form1 = Form::create();
	Form& form2 = Form::create(form1);

	form1.show();
	form2.show();
}
