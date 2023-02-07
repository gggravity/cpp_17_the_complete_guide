//
// Created by martin on 2/7/23.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  vector<string> coll;

  for (int i { 0 } ; i < 10000 ; ++i)
    {
      coll.push_back(to_string(i));
    }

  for_each_n(coll.begin(), 5,
             [] (auto &element)
             {
                 element = "value " + element;
             });

  for_each_n(coll.begin(), 10,
             [] (const auto &element)
             {
                 cout << element << '\n';
             });
}