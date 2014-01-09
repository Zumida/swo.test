#include "swo.hpp"
#include "form.hpp"

using namespace swo;

struct MyApp : public Runner {
	void run(void) {

		Form& form = Form::create();
		form.setFormType(Form::ToolWindow);
		form.show();
	}
};

Application app(new MyApp);
