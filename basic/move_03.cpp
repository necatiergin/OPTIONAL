#include <optional>
#include <string>
#include <iostream>

int main()
{
	using namespace std;

	string str(100, 'A');

	cout << "str.length() = " << str.length() << '\n';

	optional op = std::move(str);
	cout << "op->length() = " << op->length() << '\n';
	cout << "str.length() = " << str.length() << '\n';
}
