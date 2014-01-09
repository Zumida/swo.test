#include "swo.hpp"
#include "form.hpp"

using namespace swo;

struct MyApp : public Runner {
	void run(void) {

		Form& form = Form::create();
		form.show();

		Application::terminate(-1);
	}
};

Application app(new MyApp);
