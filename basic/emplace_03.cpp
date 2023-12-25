#include <optional>
#include <iostream>
#include <string>

class UserName
{
public:
	explicit UserName(const std::string& str) : m_name(str)
	{
		std::cout << "constructor : " << m_name << '\n';
	}

	~UserName()
	{
		std::cout << "destructor : " << m_name << '\n';
	}

private:
	std::string m_name;
};

int main()
{
	std::optional<UserName> op_name;

	op_name.emplace("Necati Ergin");

	op_name.emplace("Ali Serce"); //destructor cagrilacak
	op_name.reset(); // destructor cagrilacak
	op_name.emplace("Kaan Aslan"); //destructor cagrilacak
	op_name = std::nullopt;
	op_name.emplace("Oguz Karan");
	op_name = UserName("Nuri Yilmaz");
}
