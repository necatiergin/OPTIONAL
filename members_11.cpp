#include <string>
#include <optional>
#include <iostream>

std::optional<std::string> get_middle_name(const std::string& rname);

int main()
{
	std::string name;
	//...

	if (auto op = get_middle_name(name)) {
		std::cout << "second name is: " << *op << '\n';
		//
	}
	else {
		std::cout << "no second name" << '\n';
	}

	if (auto op = get_middle_name(name); op) {
		std::cout << "second name is: " << *op << '\n';
		//
	}
	else {
		std::cout << "no second name" << '\n';
	}

	if (auto op = get_middle_name(name); op.has_value()) {
		std::cout << "second name is: " << *op << '\n';
		//
	}
	else {
		std::cout << "no second name" << '\n';
	}
}
