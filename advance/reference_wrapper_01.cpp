#include <optional>
#include <iostream>

int main()
{
	using namespace std;

	string name{ "hasan" };

	optional op = ref(name);

	op->get() += "can";

	cout << "name = " << name << '\n';
}
