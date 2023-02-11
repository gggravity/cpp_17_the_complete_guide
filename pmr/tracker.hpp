//
// Created by martin on 2/11/23.
//

#pragma once

#include <bits/stdc++.h>

using namespace std;

class Tracker : public pmr::memory_resource
{
 public:
  explicit Tracker (memory_resource *upstream = pmr::get_default_resource()) :
      upstream(upstream)
  {

  }

  explicit Tracker (string prefix,
                    pmr::memory_resource *upstream = pmr::get_default_resource()) :
      prefix { std::move(prefix) },
      upstream { upstream }
  {

  }

 private:
  pmr::memory_resource *upstream;

  string prefix { };

  void *do_allocate (size_t bytes, size_t alignment) override
  {
    cout << prefix << "allocate " << bytes << " Bytes\n";
    void *ret = upstream->allocate(bytes, alignment);
    return ret;
  };

  void do_deallocate (void *ptr, size_t bytes, size_t alignment) override
  {
    cout << prefix << "deallocate " << bytes << " Bytes\n";
    upstream->deallocate(ptr, bytes, alignment);
  }

  [[nodiscard]]
  bool do_is_equal (const memory_resource &other) const noexcept override
  {
    if (this == &other)
      {
        return true;
      }
    auto op = dynamic_cast<const Tracker *>(&other);
    return op != nullptr && op->prefix == prefix && upstream->is_equal(other);
  }
};