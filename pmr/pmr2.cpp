//
// Created by martin on 2/10/23.
//

#include <bits/stdc++.h>
#include "../lang/tracknew.hpp"

using namespace std;

int main ()
{
  TrackNew::reset();

  array<byte, 200'000> buffer { };

  pmr::monotonic_buffer_resource pool { buffer.data(), buffer.size() };
  pmr::vector<pmr::string> coll { &pool };

  for (int i { 0 } ; i < 50000 ; ++i)
    {
      coll.emplace_back("just a non-SSO string");
    }

  TrackNew::status();
}