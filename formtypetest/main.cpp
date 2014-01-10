#include "swo.hpp"
#include "form.hpp"

using namespace swo;

MakeApplication(
class MyRunner : public Runner {
	void run(void) {

		Form& form = Form::create();
		form.setFormType(Form::ToolWindow);
		form.show();
	}
});
