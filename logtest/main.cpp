#include "swo.hpp"
#include "logger.hpp"
#include <exception>

using namespace swo;

class MyException : public std::exception {
private:
	std::string message;
public:
	MyException(const std::string& message) : message(message) {}
	const char* what() const throw() {return message.c_str();}
};

MakeApplication(
class MyRunner : public Runner {

public:
	void run(void) {
		/*
		 * 標準出力/標準エラー出力/標準ログ出力は、
		 * DebugViewまたはgdbにて確認すること！
		 *
		 * 当該サンプルでは、
		 * MakeApplication()マクロの影響で
		 * ログ出力時の行番号が同じになる。
		 */
		LOG_I(L"通常ログ出力");

		LOG_W(L"警告ログ出力");

		LOG_E(L"エラーログ出力");

		LOG_D(L"デバッグログ出力");

		try {
			throw std::exception();

		} catch (std::exception &e) {
			LOG_EX(e);
		}

		try {
			throw MyException("Exception log!");

		} catch (std::exception &e) {
			LOG_EX(e);
		}
	}

});
