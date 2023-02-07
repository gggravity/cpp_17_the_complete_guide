//
// Created by martin on 2/7/23.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  array coll { 3, 1, 7, 5, 4, 1, 6, 3 };

  cout << "sum: " << reduce(coll.cbegin(), coll.cend()) << '\n';

  cout << "sum: " << reduce(coll.cbegin(), coll.cend(),
                            0) << '\n';

  cout << "product: " << reduce(coll.cbegin(), coll.cend(),
                                1LL,
                                std::multiplies { }) << '\n';

  cout << "product: " << reduce(coll.cbegin(), coll.cend(),
                                0,
                                std::multiplies { }) << '\n';
}