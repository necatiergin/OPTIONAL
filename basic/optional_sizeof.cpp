#include <optional>
#include <iostream>

template<size_t n>
class A {
	unsigned char buffer[n];
};

template<size_t n>
using optype = std::optional<A<n>>;


int main()
{
	std::cout << sizeof(optype<128>) << '\n';
	std::cout << sizeof(optype<256>) << '\n';
	std::cout << sizeof(optype<512>) << '\n';
	std::cout << sizeof(optype<1024>) << '\n';
	std::cout << sizeof(optype<2048>) << '\n';
}
