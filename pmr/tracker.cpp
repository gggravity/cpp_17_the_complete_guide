//
// Created by martin on 2/11/23.
//

#include "tracker.hpp"

int main ()
{
  {
    Tracker track1 { "keep_pool: " };
    pmr::monotonic_buffer_resource keep_pool { 10'000, &track1 };
    {
      Tracker track2 { "    sync_pool: ", &keep_pool };
      pmr::synchronized_pool_resource pool { &track2 };

      for (int j { 0 } ; j < 100 ; ++j)
        {
          pmr::vector<pmr::string> collection { &pool };
          collection.reserve(100);

          for (int i { 0 } ; i < 100 ; ++i)
            {
              collection.emplace_back("just a non-SSO string");
            }
          if (j == 2)
            {
              cout << "--- third iteration done\n";
            }
        }
      cout << "--- leave scope of pool\n";
    }
    cout << "--- leave scope of keep_pool\n";
  }
}
