#include "swo.hpp"
#include "form.hpp"

using namespace swo;

MakeApplication(
class MyRunner : public Runner {
	void run(void) {

		Form& form = Form::create();
		form.show();

		Application::terminate(-1);
	}
});
