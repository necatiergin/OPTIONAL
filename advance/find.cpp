#include <optional>

template<typename Con, typename Pred>
auto find_if(Con&& c, Pred&& pred)
{
    using std::begin, std::end;
    auto beg_iter = begin(c), end_iter = end(c);
    auto result = std::find_if(beg_iter, end_iter, pred);
    using iterator = decltype(result);

    if (result == end_iter)
        return std::optional<iterator>();

    return std::optional<iterator>(result);
}

template<typename Con, typename T>
auto find(Con&& c, const T& tval)
{
    return find_if(std::forward<Con>(c),
        [&tval](auto&& x) {return x == tval; });
}
