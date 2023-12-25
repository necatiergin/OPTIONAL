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
	using namespace std;

	optional<A> op1;
	op1.emplace(); //default ctor
	optional<A> op2{ std::move(op1) }; //A's move ctor.
	cout << boolalpha;
	cout << op1.has_value() << '\n';
	cout << op2.has_value() << '\n';
}
