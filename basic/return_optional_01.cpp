#include <optional>
#include <string> 
#include <iostream>

// to_int function converts a std::string to int
// if not possible returns no value (std::nullopt)

std::optional<int> to_int(const std::string& s)
{
	try {
		return std::stoi(s);
	}
	catch (...) {
		//return {};
		return std::nullopt;
	}
}

std::optional<int> to_int2(const std::string& s)
{
	std::optional<int> ret; //ret is empty
	try {
		ret = std::stoi(s);
	}
	catch (...) {}

	return ret;
}

int main()
{
	for (auto s : { "42", " 077", "necati", "0x33" }) {
		std::optional<int> op = to_int(s);
		if (op) {
			std::cout << s << " converted to int. value is : " << *op << '\n';
		}
		else {
			std::cout << "(" << s << ") cannot be converted to int\n";
		}
	}
}
