//
// Created by martin on 2/11/23.
//

#include "invoke.hpp"
#include <bits/stdc++.h>

using namespace std;

void print (const vector<int> &collection)
{
  cout << "elements: ";
  for (const auto &element : collection)
    {
      cout << element << ' ';
    }
  cout << '\n';
}

int main ()
{
  vector values { 0, 8, 15, 42, 13, -1, 0 };

  call([&values]
  {
      cout << "size: " << values.size() << '\n';
  });
  call(print, values);

  call(&decltype(values)::pop_back, values);
  call(print, values);

  call(&decltype(values)::clear, values);
  call(print, values);
}