#include <optional>
#include <complex>
#include <set>
#include <string>

int main()
{
	using namespace std::string_literals;
	std::optional<std::complex<double>> op1{ std::in_place, 1.2, 5.6 };

	auto op2 = std::make_optional("necati");

	auto op3 = std::make_optional("necati"s);

	auto op4 = std::make_optional<std::complex<double>>(3.0, 4.0);

	auto fcomp = [](int x, int y) {return std::abs(x) < std::abs(y); };
	std::optional <std::set<int, decltype(fcomp)>> op5{ std::in_place, {2, 3, 5, 7, 9}, fcomp };
}
