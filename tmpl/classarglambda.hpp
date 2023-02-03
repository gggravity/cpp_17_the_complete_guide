//
// Created by martin on 03/02/2023.
//

#pragma once

#include <utility>

template < typename CB >
class Count_calls
{
 public:
  explicit Count_calls (CB cb) :
      callback(cb)
  {

  }

  template < typename ... Args>
  decltype(auto) operator() (Args&& ... args)
  {
    ++calls;
    return callback(std::forward<Args>(args)...);
  }

  [[nodiscard]] long count() const
  {
    return calls;
  }

 private:
  CB callback;
  long calls { 0 };
};