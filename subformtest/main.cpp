#include "application.hpp"
#include "form.hpp"

using namespace swo;

int WINAPI _tWinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPTSTR pCmdLine, int showCmd) {

	Application app;

	Form& form1 = app.createObject<Form>();
	Form& form2 = app.createObject<Form>(form1);
	form1.show();
	form2.show();

	return app.run();
}

#ifndef wWinMain
int main(const int argc, const char* argv[]) {
	::_tsetlocale(LC_ALL, L"");

	::MessageBox(NULL, _T("main関数実行中です"), _T("情報"), MB_OK | MB_ICONINFORMATION);

	return _tWinMain(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), SW_SHOW);
}
#endif