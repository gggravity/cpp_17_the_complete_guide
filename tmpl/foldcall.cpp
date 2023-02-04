//
// Created by martin on 04/02/2023.
//
#include <iostream>

using namespace std;

template < typename ... Bases >
class Multi_base : private Bases ...
{
 public:
  void print ()
  {
    (..., Bases::print());
  }
};

struct A
{
    static void print ()
    {
      cout << "A::print()\n";
    }
};

struct B
{
    static void print ()
    {
      cout << "B::print()\n";
    }
};

struct C
{
    static void print ()
    {
      cout << "C::print()\n";
    }
};

int main ()
{
  Multi_base<A, B, C> multi_base;
  multi_base.print();
}