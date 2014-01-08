#include "swo.hpp"
#include "form.hpp"

using namespace swo;

void Application::initialize(void) {

	Form& form = Form::create();
	form.setText(L"あいうえお");
	form.show();

	/*
	 * 以下は、DebugViewまたはgdbにて確認すること！
	 */
	Stdout << L"文字列テストだよ！" << std::endl;
	Stderr << L"文字列テストだよ！" << std::endl;
	Stdlog << L"文字列テスト:" << form.toString() << std::endl;


	String str;

	str += L"漢字";
	str += L"\n";
	str += L"ABC";

	Stdlog << str;

}
