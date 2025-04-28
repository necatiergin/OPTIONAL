#include <optional>
#include <iostream>

int main(void)
{
	std::optional opt = 10;
	opt = opt.transform([](int x) { return x * 2; }).
		and_then([](int x)->std::optional<int> {return x * x + 1; });

	std::cout << "opt = " << *opt<< '\n';
}
