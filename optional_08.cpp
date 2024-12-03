#include <optional>
#include <string>
#include <iostream>

int main()
{
	std::optional<std::string> op{ "Selman Terzioglu" };

	std::cout << op.value() << '\n';
	op.value().assign(5, 'A');
	std::cout << op.value() << '\n';
	op = std::nullopt;

	try {
		std::cout << "value is :" << op.value() << '\n';
	}
	catch (const std::bad_optional_access & ex) {
		std::cout << "exception caught : " << ex.what();
	}
}
