//
// Created by martin on 2/10/23.
//

#include <bits/stdc++.h>
#include "../lang/tracknew.hpp"

using namespace std;

int main ()
{
  array<byte, 200'000> buffer { };

  for (int num : { 1000, 2000, 500, 2000, 3000, 50000, 1000 })
    {
      cout << "-- check with " << num << " elements:\n";

      TrackNew::reset();

      pmr::monotonic_buffer_resource pool { buffer.data(), buffer.size() };
      pmr::vector<pmr::string> coll { &pool };

      for (int i { 0 } ; i < num ; ++i)
        {
          coll.emplace_back("just a non-SSO string");
        }

      TrackNew::status();
    }
}