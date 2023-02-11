//
// Created by martin on 2/11/23.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  array<byte, 200'000> buffer { };

  pmr::monotonic_buffer_resource pool
      {
          buffer.data(),
          buffer.size(),
          pmr::null_memory_resource()
      };

  pmr::unordered_map<long, pmr::string> collection { &pool };

  try
    {
      for (int i { 0 } ; i < buffer.size() ; ++i)
        {
          string s { "Customer" + to_string(i) };
          collection.emplace(i, s);
        }
    }
  catch (const bad_alloc &exception)
    {
      cerr << "BAD ALLOC EXCEPTION: " << exception.what() << '\n';
    }

  cout << "size: " << collection.size() << '\n';
}