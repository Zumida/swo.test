#include "swo.hpp"
#include "form.hpp"

#include "resource.h"

using namespace swo;

class MyRunner : public Runner {
private:
	Icon icon;
	Form& form1;
	Form& form2;

public:
	MyRunner()
	: Runner(),
	  form1(Form::create()),
	  form2(Form::create(form1)) {}

	void run(void) {
		icon.set(ID_ICON_SWO2),

		form1.setText(L"リソース確認テスト")
			.show();

		form2.setText(L"リソース確認テスト２")
			.setIcon(icon)
			.show();
	}
};

MakeApplication(MyRunner);
