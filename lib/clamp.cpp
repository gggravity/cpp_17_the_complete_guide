//
// Created by martin on 2/8/23.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  for (int i : { -7, 0, 8, 15 })
    {
      cout << clamp(i, 5, 13) << '\n';
    }

  cout << "\n-----------------\n\n";

  for (int i : { -7, 0, 8, 15 })
    {
      cout << clamp(i, 5, 13, [] (auto a, auto b)
      {
          return abs(a) < abs(b);
      }) << '\n';
    }
}