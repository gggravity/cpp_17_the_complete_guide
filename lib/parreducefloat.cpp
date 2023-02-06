//
// Created by martin on 2/6/23.
//

#include <bits/stdc++.h>
#include <execution>
#include "Timer.hpp"

using namespace std;

void print_sum (long num)
{
  vector<double> coll;
  coll.reserve(4 * num);

  for (long i { 0 }; i < num ; ++i)
    {
      coll.insert(coll.end(), { 0.1, 0.3, 0.00001 });
    }
  auto sum1 { accumulate(coll.begin(), coll.end(), 0.0) };
  cout << "accumulate: " << sum1 << '\n';

  auto sum2 { reduce(execution::par, coll.begin(), coll.end(), 0.0) };
  cout << "reduce:     " << sum2 << '\n';

  cout << ((sum1 == sum2) ? "equals" : "differ") << '\n';
}

int main ()
{
  cout << setprecision(20);
  print_sum(1);
  print_sum(1'000);
  print_sum(1'000'000);
  print_sum(10'000'000);
}