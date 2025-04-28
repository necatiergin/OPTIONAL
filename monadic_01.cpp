#include <optional>
#include <iostream>

int main()
{
	std::optional op = 23;
	auto result = op.transform([](int x) { return x * x; });

	std::cout << *result << '\n';
	std::optional<int> empty;
	result = empty.transform([](int x) { return x * 2; });

	if (result) {
		std::cout << *result << "\n";
	}
	else {
		std::cout << "empty optional\n";
	}
}

