//
// Created by martin on 2/7/23.
//

#include <bits/stdc++.h>
#include <execution>
#include "Timer.hpp"

using namespace std;

template < typename T >
void run (T t)
{
  Timer timer;
  array coll { 3, 1, 7, 5, 4, 1, 6, 3 };

  auto twice = [] (int v)
  {
      return v * 2;
  };

  cout << "sum of doubles: "
       << transform_reduce(t, coll.begin(), coll.end(),
                           0,
                           plus { },
                           twice)
       << '\n';

  cout << "sum of doubles: "
       << transform_reduce(t, coll.begin(), coll.end(),
                           0,
                           plus { },
                           [] (auto v)
                           {
                               return v * v;
                           })
       << '\n';

  timer.print_diff();
}

int main ()
{
  cout << "-seq----------\n";
  run(execution::seq);
  cout << "\n-par----------\n";
  run(execution::par);
}