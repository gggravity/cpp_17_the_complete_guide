//
// Created by martin on 2/8/23.
//

#include <bits/stdc++.h>

using namespace std;

template < typename T >
void print_last_5 (const T &coll)
{
  auto size { std::size(coll) };

  cout << size << " elements: ";
  auto position { begin(coll) };

  if (size > 5)
    {
      advance(position, size - 5);
      cout << "... ";
    }
  for (/* empty */; position != end(coll) ; ++position)
    {
      cout << *position << ' ';
    }
  cout << '\n';
}

int main ()
{
  array arr { 27, 3, 5, 8, 7, 12, 22, 0, 55 };
  vector v { 0.0, 8.8, 15.15 };
  initializer_list<string> il { "just", "five", "small", "string", "literals" };

  print_last_5(arr);
  print_last_5(v);
  print_last_5(il);
  print_last_5("hello world");
  print_last_5(string("hello string world"));
  print_last_5("hello new string world"s);
}