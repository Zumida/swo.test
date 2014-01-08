#include "swo.hpp"
#include "form.hpp"

#include <cstdio>

using namespace swo;

void Application::initialize(void) {

	Form& form = Form::create();
	form.setText(L"あいうえお");
	form.show();

	/*
	 * 以下は、DebugViewにて確認すること！
	 */
	Stdout << L"文字列テストだよ！" << std::endl;
	Stderr << L"文字列テストだよ！" << std::endl;
	Stdlog << L"文字列テスト:" << form.toString() << std::endl;
	fwprintf(stderr, L"標準出力への文字列");
}
