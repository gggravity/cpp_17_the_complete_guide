//
// Created by martin on 2/8/23.
//

#include <bits/stdc++.h>

using namespace std;

template < typename T >
void print_data (const T &collection)
{
  for (size_t index { 0 } ; index < size(collection) ; ++index)
    {
      if (index % 2 == 0)
        {
          cout << data(collection)[index] << ' ';
        }
    }
  cout << '\n';
}

int main ()
{
  array arr { 27, 3, 5, 8, 7, 12, 22, 0, 55 };
  vector v { 0.0, 8.8, 15.15 };
  initializer_list<string> il { "just", "five", "small", "string", "literals" };

  print_data(arr);
  print_data(v);
  print_data(il);
  print_data("hello world");
}