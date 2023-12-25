#include <optional>
#include <string>
#include <iostream>

int main()
{
	using namespace std;

	optional<string> op{ "Selman Terzioglu" };

	cout << op.value() << '\n';
	op.value().assign(5, 'A');
	cout << op.value() << '\n';
	op = nullopt;

	try {
		std::cout << op.value() << '\n';
	}
	catch (const bad_optional_access& ex) {
		cout << "hata yakalandi : " << ex.what();
	}
}
