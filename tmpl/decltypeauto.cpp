//
// Created by martin on 04/02/2023.
//

#include <iostream>

template < decltype(auto) N >
struct S
{
    void print_N() const
    {
      std::cout << "N: " << N << '\n';
    }
};

static const int c = 42;
static int v = 42;

int main()
{
  S<c> s1;
  S<(c)> s2;
  s1.print_N();
  s2.print_N();

  S<(v)> s3;
  v = 77;
  s3.print_N();
}
