// optional sizeof

#include <optional>
#include <iostream>

int main()
{
	using std::optional, std::cout;

	cout << sizeof(optional<char>) << ' ';
	cout << sizeof(optional<int>) << ' ';
	cout << sizeof(optional<double>) << '\n';
}

// sample output: 2 8 16
