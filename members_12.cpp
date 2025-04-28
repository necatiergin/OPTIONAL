#include <optional>
#include <string>
#include <iostream>

int main()
{
	using namespace std::literals;

	std::optional ostr = "necmettin"s;

	std::cout << *ostr << '\n';
	std::cout << "length = " << ostr->length() << '\n';
	*ostr = "sadullah";
	std::cout << *ostr << '\n';

	ostr = "remziye";

	std::cout << *ostr << '\n';
}
