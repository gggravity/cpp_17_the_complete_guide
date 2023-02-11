//
// Created by martin on 2/10/23.
//

#include <bits/stdc++.h>
#include "../lang/tracknew.hpp"

using namespace std;

int main ()
{
  TrackNew::reset();

  vector<string> coll;

  for (int i { 0 } ; i < 1000 ; ++i)
    {
      coll.emplace_back("just a non-SSO string");
    }

  TrackNew::status();
}