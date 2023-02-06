//
// Created by martin on 2/6/23.
//

#include <bits/stdc++.h>
#include <execution>
#include "Timer.hpp"

struct Data
{
    double value;
    double sqrt;

    friend ostream &operator<< (ostream &os, const Data &data)
    {
      os << "value: " << data.value << " sqrt: " << data.sqrt;
      return os;
    }
};

int main ()
{
  int num_elements { 1000 };

  vector<Data> coll;
  coll.reserve(num_elements);

  for (int i { 0 } ; i < num_elements ; ++i)
    {
      coll.push_back(Data { i * 4.37, 0 });
    }

  Timer timer;
  for_each(execution::par, coll.begin(), coll.end(),
           [] (Data &val)
           {
               val.sqrt = sqrt(val.value);
           });
  timer.print_diff();

  for (const auto & item : coll)
    {
      cout << item << '\n';
    }
}