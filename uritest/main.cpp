#include "swo.hpp"
#include "uri.hpp"

using namespace swo;

MakeApplication(
class MyRunner : public Runner {
public:
	void run(void) {
		/*
		 * 標準出力/標準エラー出力/標準ログ出力は、
		 * DebugViewまたはgdbにて確認すること！
		 */
		Stdlog << L"[" << L"uri::basename(c:\\abc/def.txt)" << L"]" << std::endl;
		Stdlog << L"[" << uri::basename(L"c:\\abc/def.txt") << L"]" << std::endl;

		Stdlog << L"[" << L"uri::basename(c:\\def.txt)" << L"]" << std::endl;
		Stdlog << L"[" << uri::basename(L"c:\\def.txt") << L"]" << std::endl;

		Stdlog << L"[" << L"uri::basename(\\def.txt)" << L"]" << std::endl;
		Stdlog << L"[" << uri::basename(L"\\def.txt") << L"]" << std::endl;

		Stdlog << L"[" << L"uri::basename(def.txt)" << L"]" << std::endl;
		Stdlog << L"[" << uri::basename(L"def.txt") << L"]" << std::endl;

		Stdlog << L"[" << L"uri::basename(c:\\abc/.bashrc)" << L"]" << std::endl;
		Stdlog << L"[" << uri::basename(L"c:\\abc/.bashrc") << L"]" << std::endl;


		Stdlog << L"[" << L"uri::filename(c:\\abc/def.txt)" << L"]" << std::endl;
		Stdlog << L"[" << uri::filename(L"c:\\abc/def.txt") << L"]" << std::endl;

		Stdlog << L"[" << L"uri::filename(c:\\def.txt)" << L"]" << std::endl;
		Stdlog << L"[" << uri::filename(L"c:\\def.txt") << L"]" << std::endl;

		Stdlog << L"[" << L"uri::filename(\\def.txt)" << L"]" << std::endl;
		Stdlog << L"[" << uri::filename(L"\\def.txt") << L"]" << std::endl;

		Stdlog << L"[" << L"uri::filename(def.txt)" << L"]" << std::endl;
		Stdlog << L"[" << uri::filename(L"def.txt") << L"]" << std::endl;

		Stdlog << L"[" << L"uri::filename(c:\\abc/.bashrc)" << L"]" << std::endl;
		Stdlog << L"[" << uri::filename(L"c:\\abc/.bashrc") << L"]" << std::endl;


		Stdlog << L"[" << L"uri::extname(c:\\abc/def.txt)" << L"]" << std::endl;
		Stdlog << L"[" << uri::extname(L"c:\\abc/def.txt") << L"]" << std::endl;

		Stdlog << L"[" << L"uri::extname(c:\\def.txt)" << L"]" << std::endl;
		Stdlog << L"[" << uri::extname(L"c:\\def.txt") << L"]" << std::endl;

		Stdlog << L"[" << L"uri::extname(\\def.txt)" << L"]" << std::endl;
		Stdlog << L"[" << uri::extname(L"\\def.txt") << L"]" << std::endl;

		Stdlog << L"[" << L"uri::extname(def.txt)" << L"]" << std::endl;
		Stdlog << L"[" << uri::extname(L"def.txt") << L"]" << std::endl;

		Stdlog << L"[" << L"uri::extname(c:\\abc/.bashrc)" << L"]" << std::endl;
		Stdlog << L"[" << uri::extname(L"c:\\abc/.bashrc") << L"]" << std::endl;

	}
});
