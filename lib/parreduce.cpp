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

  long i { 0 };
  for (/* empty*/; i < num ; ++i)
    {
      coll.insert(coll.end(), { 1, 2, 3, 4 });
    }
  Timer timer;
  auto sum { reduce(execution::par, coll.begin(), coll.end(), 0L) };
  auto out_string = string("reduce (" + to_string(sum) + ")");
  cout << setw(30) << left << out_string;
  timer.print_diff("dt: ");
}

int main ()
{
  print_sum(1);
  print_sum(1'000);
  print_sum(1'000'000);
  print_sum(10'000'000);
}