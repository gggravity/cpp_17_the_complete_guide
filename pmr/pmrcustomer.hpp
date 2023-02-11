//
// Created by martin on 2/11/23.
//

#pragma once

#include <bits/stdc++.h>

using namespace std;

class Pmr_customer
{
 public:
  using allocator_type = pmr::polymorphic_allocator<char>;

  explicit Pmr_customer (pmr::string _name, allocator_type alloc = { }) :
      _name { std::move(_name), alloc }
  {

  }

  Pmr_customer (const Pmr_customer &customer, allocator_type alloc = { }) :
      _name { customer._name, alloc }
  {

  }

  Pmr_customer (Pmr_customer &&customer, allocator_type alloc = { }) noexcept :
      _name { std::move(customer._name), alloc }
  {

  }

  void set_name(pmr::string name)
  {
    _name = std::move(name);
  }

  [[nodiscard]]
  pmr::string get_name() const
  {
    return _name;
  }

  [[nodiscard]]
  string get_name_as_string() const
  {
    return string{_name};
  }


 private:
  pmr::string _name;
};