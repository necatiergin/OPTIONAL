#include <optional>
#include <iostream>

struct A {
	A() { std::cout << "default ctor()\n"; }
	A(const A&) = delete;
	A& operator=(const A&) = delete;
	A(A&&) { std::cout << "move ctor()\n"; }
	//...
};

int main()
{
	A ax;

	std::optional<A> op1{ std::move(ax) };
	std::optional<A> op2{ std::move(*op1) };
}
