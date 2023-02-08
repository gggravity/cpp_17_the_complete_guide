//
// Created by martin on 2/8/23.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  array coll { 3, 1, 7, 0, 4, 1, 6, 3 };

  cout << " inclusive_scan():     ";
  inclusive_scan(coll.begin(), coll.end(),
                 ostream_iterator<int>(cout, " "));

  cout << "\n exclusive_scan():   ";
  exclusive_scan(coll.begin(), coll.end(),
                 ostream_iterator<int>(cout, " "),
                 0);

  cout << "\n exclusive_scan():     ";
  exclusive_scan(coll.begin(), coll.end(),
                 ostream_iterator<int>(cout, " "),
                 100);

  cout << "\n inclusive_scan():         ";
  inclusive_scan(coll.begin(), coll.end(),
                 ostream_iterator<int>(cout, " "),
                 plus { },
                 100);

  cout << "\n exclusive_scan():     ";
  exclusive_scan(coll.begin(), coll.end(),
                 ostream_iterator<int>(cout, " "),
                 100,
                 plus { });
}