#include <optional>
#include <string>
#include <iostream>

void display_e_mail(const std::optional<std::string>& op)
{
	std::cout << "e posta adresi : " << op.value_or("belirtilmemis") << '\n';
}

int main()
{
	std::optional<std::string> e_mail_address{ "necati@gmail.com" };
	display_e_mail(e_mail_address);
	e_mail_address = std::nullopt;
	display_e_mail(e_mail_address);
	//...	
}
