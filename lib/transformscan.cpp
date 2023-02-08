//
// Created by martin on 2/8/23.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  array coll { 3, 1, 7, 0, 4, 1, 6, 3 };

  auto twice = [] (int v)
  {
      return v * 2;
  };

  cout << " source                     : ";
  copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));

  cout << "\n transform_inclusive_scan() :     ";
  transform_inclusive_scan(coll.cbegin(), coll.cend(),
                           ostream_iterator<int>(cout, " "),
                           plus { },
                           twice);

  cout << "\n test                       :     "
       << twice(3) << " " << twice(3 + 1) << " " << twice(3 + 1 + 7) << " "
       << twice(3 + 1 + 7 + 0) << " " << twice(3 + 1 + 7 + 0 + 4) << " "
       << twice(3 + 1 + 7 + 0 + 4 + 1) << " " << twice(3 + 1 + 7 + 0 + 4 + 1 + 6) << " "
       << twice(3 + 1 + 7 + 0 + 4 + 1 + 6 + 3);

  cout << "\n transform_inclusive_scan() :     ";
  transform_inclusive_scan(coll.cbegin(), coll.cend(),
                           ostream_iterator<int>(cout, " "),
                           plus { },
                           twice,
                           100);

  cout << "\n transform_exclusive_scan() : ";
  transform_exclusive_scan(coll.cbegin(), coll.cend(),
                           ostream_iterator<int>(cout, " "),
                           100,
                           plus { },
                           twice);

}