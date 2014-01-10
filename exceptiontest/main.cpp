#include "swo.hpp"
#include "form.hpp"
#include <exception>

using namespace swo;

MakeApplication(
class MyRunner : public Runner {
	void run(void) {

		Form& form = Form::create();
		form.show();

		throw std::exception();
	}
});
