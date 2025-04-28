#include <iostream>
#include <optional>

class NoCopyNoMove {
public:
	NoCopyNoMove()
	{
		std::cout << "default ctor\n";
	}

	~NoCopyNoMove()
	{
		std::cout << "destructor\n";
	}

	NoCopyNoMove(int)
	{
		std::cout << "NoCopyNoMove(int)\n";
	}

	NoCopyNoMove(const NoCopyNoMove&) = delete;
	NoCopyNoMove& operator=(const NoCopyNoMove&) = delete;
};

int main()
{
	{ std::optional<NoCopyNoMove> x(std::in_place); }
	{ std::optional<NoCopyNoMove> y(std::in_place, 34); }
}
