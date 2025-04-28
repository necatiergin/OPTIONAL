#include <optional>
#include <string>

int main()
{
	std::optional<std::string> s1{ "necati" };
	std::optional<std::string> s2{ "sade" };

	s1 = s2;
}


/*
if (s1.has_value() && s2.has_value()) {
    *s1 = *s2; // burada T türünün operator= çağrılır
}
else if (!s1.has_value() && s2.has_value()) {
    s1.emplace(*s2); // s1 boşsa ve s2 doluysa, yeni bir T nesnesi oluşturur
}
else if (s1.has_value() && !s2.has_value()) {
    s1.reset(); // s2 boşsa, s1'i boş hale getirir (destructor çağrılır)
}
// ikisi de boşsa hiçbir şey yapmaz
*/
