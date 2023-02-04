//
// Created by martin on 04/02/2023.
//

#include <string>
#include <iostream>

using namespace std;

template < typename T >
class Base
{
 public:
  Base ()
  {

  }

  Base (T v) :
      value { v }
  {

  }

  T get_value () const
  {
    return value;
  }

 private:
  T value { };
};

template < typename ... Types >
class Milti : public Base<Types> ...
{
 public:
  using Base<Types>::Base...;
};

int main()
{
  using MultiISB = Milti<int, std::string, bool>;

  MultiISB m1 = 42;
  MultiISB m2 = std::string("Hello");
  MultiISB m3 = true;

  auto bi = (Base<int>)m1;
  auto bs = (Base<string>)m2;
  auto bb = (Base<bool>)m3;

  cout << bi.get_value() << '\n';
  cout << bs.get_value() << '\n';
  cout << bb.get_value() << '\n';
}


