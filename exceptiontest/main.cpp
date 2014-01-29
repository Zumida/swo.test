#include "swo.hpp"
#include "form.hpp"
#include "exception.hpp"

using namespace swo;

class MyException : public Exception {
public:
	MyException(const String& message) : Exception(message) {}
	MyException(const String& message, const Exception& cause)
	: Exception(message,cause) {}
};

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
				throw Exception(L"Test2", e);
			}

		} catch (const Exception& e) {
			Stdlog << L"e.getMessage()=" << e.getMessage() << std::endl;
			Stdlog << L"e.getCause()=" << e.getCause() << std::endl;
			Stdlog << L"e.what()=" << e.what() << std::endl;
			Stdlog << L"e.getCause()->getMessage()=" << e.getCause()->getMessage() << std::endl;
			Stdlog << L"e.getDetail()=" << e.getDetail() << std::endl;
		}

		try {
			try {
				throw MyException(L"Test3");

			} catch (const Exception& e) {
				throw Exception(L"Test4", e);
			}

		} catch (const Exception& e) {
			Stdlog << L"e.getMessage()=" << e.getMessage() << std::endl;
			Stdlog << L"e.getCause()=" << e.getCause() << std::endl;
			Stdlog << L"e.what()=" << e.what() << std::endl;
			Stdlog << L"e.getCause()->getMessage()=" << e.getCause()->getMessage() << std::endl;
			Stdlog << L"e.getDetail()=" << e.getDetail() << std::endl;
		}

		try {
			try {
				throw Exception(L"Test5");

			} catch (const Exception& e) {
				throw MyException(L"Test6", e);
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
