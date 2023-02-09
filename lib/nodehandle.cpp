//
// Created by martin on 2/9/23.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  map<int, string> m {
      { 1, "mango" },
      { 2, "papaya" },
      { 3, "guava" }
  };

  auto node_handle { m.extract(2) };

  node_handle.key() = 4;

  m.insert(std::move(node_handle));

  for (const auto &[key, value] : m)
    {
      cout << key << ": " << value << '\n';
    }
}