#include <optional>
#include <string>
#include <iostream>

int main()
{
	std::string str(100, 'A');

	std::cout << "str.length() = " << str.length() << '\n';

	std::optional op = move(str);
	std::cout << "op->length() = " << op->length() << '\n';
	std::cout << "str.length() = " << str.length() << '\n';
}
