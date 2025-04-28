#include <optional>
#include <iostream>

int main()
{
    std::optional op = 5;

    auto result = op
        .transform([](int x) { return x * x; })    
        .and_then([](int x) -> std::optional<int> {
        if (x < 100) return x;
        return std::nullopt;
            })                                         
        .or_else([] { return std::optional<int>{99}; }); 

    std::cout << *result << '\n';
}


