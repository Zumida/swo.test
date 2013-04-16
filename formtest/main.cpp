#include "application.hpp"
#include "form.hpp"

using namespace swo;

int WINAPI _tWinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPTSTR pCmdLine, int showCmd) {

	Application app;

	Form& form = app.createObject<Form>();
	form.show();

	return app.run();
}

#ifndef wWinMain
int main(const int argc, const char* argv[]) {
	::_tsetlocale(LC_ALL, L"");

	return _tWinMain(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), SW_SHOW);
}
#endif
