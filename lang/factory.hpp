//
// Created by martin on 02/02/2023.
//

#pragma once

#include <utility>

template < typename T, typename ... Args >
T create (Args &&... args)
{
  return T { std::forward<Args>(args)... };
}