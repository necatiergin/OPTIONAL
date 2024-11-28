#include <optional>
#include <iostream>

struct Nec
{
	std::optional<double> mx;
	std::optional<double> my;
};

struct Erg
{
	bool mx_flag;
	bool my_flag;
	double mx;
	double my;
};

int main()
{
	std::cout << "sizeof(Nec) = " << sizeof(Nec) << '\n';
	std::cout << "sizeof(Erg) = " << sizeof(Erg) << '\n';
}
