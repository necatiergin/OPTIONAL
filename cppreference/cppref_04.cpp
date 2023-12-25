#include <optional>
#include <iostream>

struct A {
    std::string s;
    A(std::string str) : s(std::move(str)), id{ n++ } { note("+ constructed"); }
    ~A() { note("~ destructed"); }
    A(const A& o) : s(o.s), id{ n++ } { note("+ copy constructed"); }
    A(A&& o) : s(std::move(o.s)), id{ n++ } { note("+ move constructed"); }
    A& operator=(const A& other) {
        s = other.s;
        note("= copy assigned");
        return *this;
    }
    A& operator=(A&& other) {
        s = std::move(other.s);
        note("= move assigned");
        return *this;
    }
    inline static int n{};
    int id{};
    void note(auto s) { std::cout << "  " << s << " #" << id << '\n'; }
};

int main()
{
    using namespace std;

    optional<A> opt;

    cout << "Assign:\n";
    opt = A("Lorem ipsum dolor sit amet, consectetur adipiscing elit nec.");

    cout << "Emplace:\n";
    //As opt contains a value it will also destroy that value
    opt.emplace("Lorem ipsum dolor sit amet, consectetur efficitur.");

    cout << "End example\n";
}
