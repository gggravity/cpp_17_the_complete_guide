//
// Created by martin on 03/02/2023.
//

#include <iostream>
#include <algorithm>
#include <execution>
#include "classarglambda.hpp"

using namespace std;

int main ()
{
  vector v1 { 1, 6, 3, 8, 4, 7, 5, 8, 2, 8, 4, 8, 0, 6 };
  auto v2 = v1;
  auto v3 = v1;

  Count_calls sc1 { [] (auto x, auto y)
                   {
                       return x > y;
                   } };

  auto sc2 = sc1;

  sort(v1.begin(), v1.end(), std::ref(sc1));

  for (const auto &i : v1)
    {
      cout << i << " ";
    }
  cout << "sorted with " << sc1.count() << " calls\n";

  auto fo = for_each(v2.begin(), v2.end(),
                     Count_calls { [] (auto i)
                                   {
                                       cout << i << " "; // no sorting, just printing.
                                   } });
  cout << "sorted with " << fo.count() << " calls\n";

  sort(execution::par, v3.begin(), v3.end(), std::ref(sc2));

  for (const auto &i : v3)
    {
      cout << i << " ";
    }
  cout << "sorted with " << sc2.count() << " calls\n";
}