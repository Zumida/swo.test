#include "swo.hpp"
#include "form.hpp"

using namespace swo;

class MyRunner : public Runner {
private:
	Form& form = Form::create();

public:
	void run(void) {
		Stdlog << L"多重アプリケーションテスト" << std::endl;

		form.setText(getClassName())
			.show();
	}

};

MyRunner runner1;
Application myapp1(&runner1);

MyRunner runner2;
Application myapp2(&runner2); // <- throw exception
