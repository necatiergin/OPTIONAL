#include <iostream>
#include <optional>

class Myclass {
public:
	Myclass()
	{
		std::cout << "default ctor\n";
	}

	Myclass(int, int, int)
	{
		std::cout << "Myclass(int, int, int)\n";
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
	//std::optional<Myclass> y{ Myclass{} };
	//std::optional<Myclass> z{ std::in_place };
	//std::optional<Myclass> t{ std::in_place, 1, 3, 5 };
}
