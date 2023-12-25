#include <optional>
#include <string>
#include <iostream>

int main()
{
	using namespace std;

	optional ostr = "necmettin"s;

	cout << *ostr << '\n';
	cout << "length = " << ostr->length() << '\n';
	*ostr = "sadullah";
	cout << *ostr << '\n';

	ostr = "remziye";

	cout << *ostr << '\n';
}
