#include <optional>
#include <iostream>

int main()
{
	using std::optional, std::nullopt, std::cout;
	optional<bool> oe{ nullopt };

	optional ox{ false };
	optional oy{ true };

	boolalpha(cout);

	cout << (oe == ox) << '\n';  //false
	cout << (oe == oy) << '\n';  //false
	cout << (oe < ox) << '\n';  //true
	cout << (oe < oy) << '\n';  //true
	cout << (oe == true) << '\n';  //false
	cout << (oe == false) << '\n';  //false
	cout << (ox == oy) << '\n';  //false
	cout << (ox < oy) << '\n';  //true
}
