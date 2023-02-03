//
// Created by martin on 03/02/2023.
//

#pragma once

#include <string>

using namespace std;

template < typename T >
string as_string(T x)
{
  if constexpr (is_same_v<T, string>)
    {
      return x;
    }
  else if constexpr (is_arithmetic_v<T>)
    {
      return to_string(x);
    }
  else
    {
      return string(x);
    }
}