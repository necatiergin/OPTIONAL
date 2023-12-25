#include <optional>
#include <iostream>

int main()
{
	std::optional<double> d1{ 2.56 };
	std::optional<double> d2{ 0.78 };
	std::optional<int> i{ 40 };

	std::cout << *d1 << '\n';
	d1 = d2;
	std::cout << *d1 << '\n';
	d1 = i;
	std::cout << *d1 << '\n';
	d1 = 5.69;
	std::cout << *d1 << '\n';
	d1 = 13;
	std::cout << *d1 << '\n';
	d1 = std::nullopt;
	d2 = {};

	if (!d1 && !d2)
	    std::cout << "her iki nesnenin de degeri yok\n";
}
