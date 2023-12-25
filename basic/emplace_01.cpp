#include <iostream>
#include <optional>

class A {
public:
	~A() { std::cout << "~A() this: " << this << '\n'; }
	A() { std::cout << "A() this : " << this << '\n'; }
	A(int) { std::cout << "A(int) this : " << this << '\n'; }
	A(int, int) { std::cout << "A(int, int) this : " << this << '\n'; }
	A(double) { std::cout << "A(double) this : " << this << '\n'; }
	A(std::string) { std::cout << "A(string) this : " << this << '\n'; }
};

int main()
{
	std::optional<A> os;
	std::cout << "&os = " << &os << '\n';
	os.emplace();
	os.emplace(10);
	os.emplace(10, 20);
	os.emplace(4.5);
	os.emplace("necati");
}
