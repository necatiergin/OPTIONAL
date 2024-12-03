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
	using namespace std;

	{optional<NoCopyNoMove> x(in_place); }
	{optional<NoCopyNoMove> y(in_place, 34); }
}
