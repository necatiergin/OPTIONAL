#include <optional>
#include <string> 
#include <iostream>

// aldigi string'i int degere donusturecek - inte donusturemez ise deger dondurmeyecek

std::optional<int> to_int(const std::string& s)
{
	try {
		return std::stoi(s);
	}
	catch (...) {
		//return {};
		return std::nullopt;
	}
}

std::optional<int> to_int2(const std::string& s)
{
	std::optional<int> ret; // deger tutmuyor
	try {
		ret = std::stoi(s);
	}
	catch (...) {}

	return ret;
}

int main()
{
	for (auto s : { "42", " 077", "necati", "0x33" }) {
		// ogeleri int'e donusturup cikis akimina yazdiriyoruz:
		std::optional<int> op = to_int(s);
		if (op) {
			std::cout << s << " yazisi int'e donusturuldu... deger : " << *op << "\n";
		}
		else {
			std::cout << "(" << s << ") yazisi int'e donusturulemiyor\n";
		}
	}
}
