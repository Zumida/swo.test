#include "swo.hpp"
#include "form.hpp"
#include <exception>

using namespace swo;

struct MyApp : public Runner {
	void run(void) {

		Form& form = Form::create();
		form.show();

		throw std::exception();
	}
};

Application app(new MyApp);
