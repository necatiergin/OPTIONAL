#include <optional>
#include <iostream>

int main()
{
	std::optional<int> op1;  //empty 
	std::optional op2{ 2 };
	std::optional op3{ 3 };

	boolalpha(std::cout);
	std::cout << (op1 > op2) << '\n';
	std::cout << (op2 < op3) << '\n';
	std::cout << (op1 < op2) << '\n';
	std::cout << (op1 == std::nullopt) << '\n';
	std::cout << (op3 == 3) << '\n';
}
