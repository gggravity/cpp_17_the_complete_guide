//
// Created by martin on 2/8/23.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  vector<string> collection;

  for (int i { 0 } ; i < 10'000 ; ++i)
    {
      collection.push_back("value" + to_string(i));
    }

  random_device rd;
  mt19937 eng { rd() };

  vector<string> subset;
  subset.resize(100);

  auto end { sample(collection.begin(), collection.end(),
                    subset.begin(),
                    10,
                    eng) };

  for_each(subset.begin(), end,
           [] (const auto &s)
           {
               cout << "random element: " << s << '\n';
           });
}