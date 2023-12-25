#include <optional>

int main()
{
	std::optional<int> op{ 10 };

	op.value() = 20;
	//op.value_or(0) = 30; //invalid
	//value_or member function doesn't return a reference.
	//...
}
