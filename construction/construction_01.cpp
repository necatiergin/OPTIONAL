#include <optional>
#include <iostream>
#include <string>

template<typename T>
void print_op(const std::optional<T>& op)
{
	if (op) {
		std::cout << "value is : " << *op << "\n";
	}
	else {
		std::cout << "has no value\n";
	}
	std::cout << "--------------------------------------------------\n";
}

int main()
{
	using namespace std::string_literals;

	std::optional<int> op1;
	print_op(op1);

	std::optional<double> op2{};
	print_op(op2);

	//std::optional<long> op3(); //function decl.

	std::optional<char> op4 = std::nullopt;
	print_op(op4);

	std::optional op5{ 12.f }; //CTAD
	print_op(op5);

	std::optional op6{ "necati" };
	print_op(op6);

	std::optional op7{ "necati"s };
	print_op(op7);

	std::optional<std::string> op8{ "alican" };
	print_op(op8);
}
