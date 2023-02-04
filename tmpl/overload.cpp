//
// Created by martin on 04/02/2023.
//
#include <string>
#include <iostream>

template < typename ... Ts >
struct overload : Ts ...
{
    using Ts::operator()...;
};

template < typename ... Ts >
overload (Ts...) -> overload<Ts...>;

auto twice = overload {
    [] (std::string &s)
    {
        s += s;
    },
    [] (auto &v)
    {
        v *= 2;
    }
};

int main ()
{
  int i = 42;
  twice(i);
  std::cout << "i: " << i << '\n';

  std::string s { "hi" };
  twice(s);
  std::cout << "s: " << s << '\n';
}