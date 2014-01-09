#include "swo.hpp"
#include "form.hpp"

using namespace swo;

struct MyApp : public Runner {
	void run(void) {

		Form& form1 = Form::create();
		Form& form2 = Form::create(form1);

		form1.show();
		form2.show();
	}
};

Application app(new MyApp);
