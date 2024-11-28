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
	using namespace std;

	//optional<Myclass> x;
	//optional<Myclass> y{ Myclass{} };
	optional<Myclass> z{ in_place};
}
