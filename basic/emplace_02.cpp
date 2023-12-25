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
};



int main()
{
	std::optional<Myclass> x;
		for (int i = 0; i < 5; ++i) {
		x.emplace();
		//...
	}
}
