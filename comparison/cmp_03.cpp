#include <optional>
#include <iostream>

int main()
{
	std::optional<int> op1;  //empty durumda
	std::optional<int> op2{ 2 };
	std::optional<int> op3{ 3 };

	std::cout << std::boolalpha;
	std::cout << (op1 > op2) << '\n'; 
	std::cout << (op2 < op3) << '\n';
	std::cout << (op1 < op2) << '\n';
	std::cout << (op1 == std::nullopt) << '\n';
	std::cout << (op3 == 3) << '\n';
}
