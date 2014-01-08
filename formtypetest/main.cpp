#include "swo.hpp"
#include "form.hpp"

using namespace swo;

void Application::initialize(void) {

	Form& form = Form::create();
	form.setFormType(Form::ToolWindow);
	form.show();
}
