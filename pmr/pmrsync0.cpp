//
// Created by martin on 2/11/23.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  map<long, string> collection;

  for (int i { 0 } ; i < 10 ; ++i)
    {
      string s { "Customer" + to_string(i) };
      collection.emplace(i, s);
    }

  for (const auto &element : collection)
    {
      static long long last_val { 0 };
      auto val = reinterpret_cast<long long>(&element);
      cout << "diff: " << (val - last_val) << '\n';
      last_val = val;
    }
}