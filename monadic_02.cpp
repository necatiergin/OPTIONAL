// transform

#include <optional>
#include <iostream>

int main(void)
{
	std::optional opt = 10;
	opt = opt.transform([](int x) { return x * 2; });
	std::cout << "opt = " << *opt<< '\n';

	std::optional<int> empty;
	empty = empty.transform([](int x) { return x * 2; });
	if (!empty)
		std::cout << "empty\n";
}
