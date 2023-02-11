//
// Created by martin on 2/11/23.
//

#include <bits/stdc++.h>
#include "charconv.hpp"

using namespace std;

int main ()
{
  vector collection { 0.1, 0.3, 0.00001 };

  auto sum1 { accumulate(collection.cbegin(),
                         collection.cend(),
                         0.0,
                         plus<>()) };

  auto sum2 { accumulate(collection.crbegin(),
                         collection.crend(),
                         0.0,
                         plus<>()) };

  cout << "sum1:   " << sum1 << '\n';
  cout << "sum2:   " << sum2 << '\n';

  cout << boolalpha << setprecision(20);
  cout << "equal:  " << (sum1 == sum2) << '\n';
  cout << "sum1:   " << sum1 << '\n';
  cout << "sum2:   " << sum2 << '\n';
  cout << '\n';

  d2str2d(sum1);
  d2str2d(sum2);
}