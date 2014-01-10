#include "swo.hpp"
#include "form.hpp"

using namespace swo;

MakeApplication(
class MyRunner : public Runner {
private:
	Form& form = Form::create();

public:
	void run(void) {
		/*
		 * 標準出力/標準エラー出力/標準ログ出力は、
		 * DebugViewまたはgdbにて確認すること！
		 */
		Stdout << L"文字列テストだよ！" << std::endl;
		Stderr << L"文字列テストだよ！" << std::endl;
		Stdlog << L"文字列テスト:" << form.toString() << std::endl;


		String str;

		str += L"漢字";
		str += L"\n";
		str += L"ABC";

		Stdlog << str;


		form.setText(L"あいうえお")
			.show();
	}

});
