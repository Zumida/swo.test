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

		Stdlog << str << std::endl;

		str = L"ABCDEFABCDEF";
		Stdlog << L"string::replaceAll(" << str << L", AB, abcabcabc)" << std::endl;
		str = string::replaceAll(str, L"AB", L"abcabcabc");
		Stdlog << str << std::endl;

		Stdlog << L"string::basename(c:\\abc/def.txt)" << std::endl;
		Stdlog << string::basename(L"c:\\abc/def.txt") << std::endl;

		Stdlog << L"string::basename(c:\\def.txt)" << std::endl;
		Stdlog << string::basename(L"c:\\def.txt") << std::endl;

		Stdlog << L"string::basename(\\def.txt)" << std::endl;
		Stdlog << string::basename(L"\\def.txt") << std::endl;

		Stdlog << L"string::basename(def.txt)" << std::endl;
		Stdlog << string::basename(L"def.txt") << std::endl;

		form.setText(L"あいうえお")
			.show();
	}

});
