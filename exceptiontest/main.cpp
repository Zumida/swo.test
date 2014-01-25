#include "swo.hpp"
#include "form.hpp"
#include "exception.hpp"

using namespace swo;

MakeApplication(
class MyRunner : public Runner {
	void run(void) {

		try {
			throw Exception(L"Test1");

		} catch (const Exception& e) {
			Stdlog << L"e.getMessage()=" << e.getMessage() << std::endl;
			Stdlog << L"e.getCause()=" << e.getCause() << std::endl;
			Stdlog << L"e.what()=" << e.what() << std::endl;
			Stdlog << L"e.getDetail()=" << e.getDetail() << std::endl;
		}

		try {
			try {
				throw Exception(L"Test1");

			} catch (const Exception& e) {
				throw Exception(L"Test2", &e);
			}

		} catch (const Exception& e) {
			Stdlog << L"e.getMessage()=" << e.getMessage() << std::endl;
			Stdlog << L"e.getCause()=" << e.getCause() << std::endl;
			Stdlog << L"e.what()=" << e.what() << std::endl;
			Stdlog << L"e.getCause()->getMessage()=" << e.getCause()->getMessage() << std::endl;
			Stdlog << L"e.getDetail()=" << e.getDetail() << std::endl;
		}

		Form& form = Form::create();
		form.show();

		throw std::exception();
	}
});
