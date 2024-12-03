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

	op_name.emplace("necati"); 
	//constructor: necati
	op_name.emplace("ali");  
	//destructor: necati constructor: ali
	op_name.reset(); //
	// destructor : ali"
	op_name.emplace("kaan"); 
	//constructor: kaan
	op_name = std::nullopt;
	// destructor: kaan
	op_name.emplace("oguz");
	//constructor: oguz
	//destructor: oguz
}
