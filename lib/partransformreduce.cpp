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

  auto sum_val = [] (auto val)
  {
      return val * val;
  };

  auto sum { transform_reduce(
      execution::par,
      coll.begin(),
      coll.end(),
      0L,
      plus { },
      sum_val) };

  cout << "reduce(): " << sum << '\n';
}

int main ()
{
  print_sum(1);
  print_sum(1'000);
  print_sum(1'000'000);
  print_sum(10'000'000);
}