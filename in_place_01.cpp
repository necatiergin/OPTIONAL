#include <iostream>
#include <optional>

class Myclass {
public:
	Myclass()
	{
		std::cout << "default ctor\n";
	}

	~Myclass()
	{
		std::cout << "destructor\n";
	}

	Myclass(const Myclass&)
	{
		std::cout << "copy ctor\n";
	}

	Myclass(Myclass&&)
	{
		std::cout << "move ctor\n";
	}

};

int main()
{
	std::optional<Myclass> x;
	std::optional<Myclass> y{ Myclass{} };
	std::optional<Myclass> z{ std::in_place };
}
