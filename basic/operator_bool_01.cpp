#include <optional>
#include <iostream>
#include <string>

std::optional<std::string> get_middle_name(const std::string& rname)
{
	//return {};
	return "alican";

}

int main()
{
	using namespace std;

	std::string str;
	///code

	if (auto ostr = get_middle_name(str); ostr)
		std::cout << *ostr << '\n';
	else
		std::cout << "ostr bos durumda\n";
}
