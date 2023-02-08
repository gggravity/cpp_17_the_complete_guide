//
// Created by martin on 2/8/23.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  array coll1 { 3, 1, 7, 5, 4, 1, 6, 3 };
  array coll2 { 1, 2, 3, 4, 5, 6, 7, 8 };

  cout << "sum of squared: "
       << transform_reduce(coll1.cbegin(), coll1.cend(),
                           coll1.cbegin(),
                           0L)
       << '\n';

  cout << "product of differences: "
       << transform_reduce(coll1.cbegin(), coll1.cend(),
                           coll2.cbegin(),
                           1L,
                           multiplies { },
                           minus { })
       << '\n';

  cout << "sum of combined digits: "
       << transform_reduce(coll1.cbegin(), coll1.cend(),
                           coll2.cbegin(),
                           string { },
                           plus { },
                           [] (auto x, auto y)
                           {
                               return to_string(x) + to_string(y) + " ";
                           })
       << '\n';

  cout << "product of differences: "
       << 1 * (3 - 1) * (1 - 2) * (7 - 3) * (5 - 4) * (4 - 5) * (1 - 6) * (6 - 7) * (3 - 8) << endl;
}