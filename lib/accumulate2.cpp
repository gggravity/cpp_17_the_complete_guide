//
// Created by martin on 2/6/23.
//

#include <bits/stdc++.h>
#include <execution>
#include "Timer.hpp"

using namespace std;

void print_sum (long num)
{
  vector<long> coll;
  coll.reserve(4 * num);

  for (long i { 0 } ; i < num ; ++i)
    {
      coll.insert(coll.end(), { 1, 2, 3, 4 });
    }

  auto squared_sum = [] (auto sum, auto val)
  {
      return sum + val * val;
  };

  auto sum = accumulate(coll.begin(), coll.end(), 0L, squared_sum);

  cout << "accumulate(): " << sum << '\n';
}

int main ()
{
  print_sum(1);
  print_sum(1'000);
  print_sum(1'000'000);
  print_sum(10'000'000);
}