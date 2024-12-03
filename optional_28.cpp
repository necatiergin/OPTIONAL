#include <optional>
#include <iostream>

int main()
{
	std::string name{ "hasan" };
	std::optional op = ref(name);
	op->get() += "can";
	std::cout << "name = " << name << '\n';
}
