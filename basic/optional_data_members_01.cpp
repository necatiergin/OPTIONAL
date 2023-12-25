#include <optional>
#include <iostream>
#include <string>


class UserRecord
{
public:
	UserRecord(const std::string& name, std::optional<std::string> nick, std::optional<int> age)
		: m_name{ name }, m_nick{ nick }, m_age{ age }
	{
	}
	friend std::ostream& operator << (std::ostream& stream, const UserRecord& user);
private:
	std::string m_name;
	std::optional<std::string> m_nick;
	std::optional<int> m_age;

};

std::ostream& operator << (std::ostream& os, const UserRecord& user)
{
	os << user.m_name << ' ';
	if (user.m_nick) {
		os << *user.m_nick << ' ';
	}
	if (user.m_age)
		os << *user.m_age << " yasinda.";

	return os;
}

int main()
{
	UserRecord ur1{ "Necati Ergin", "Neco", 70 };
	UserRecord ur2{ "Kagan Aslan", std::nullopt, std::nullopt };

	std::cout << ur1 << '\n';
	std::cout << ur2 << '\n';
}
