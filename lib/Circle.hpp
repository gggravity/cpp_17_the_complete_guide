//
// Created by martin on 05/02/2023.
//

#pragma once

#include "Coord.hpp"
#include <iostream>

class Circle
{
 public:
  Circle (const Coord &center, int rad) :
      center { center },
      radius { rad }
  {

  }

  void move (const Coord &c)
  {
    center += c;
  }

  void draw () const
  {
    std::cout << "circle at " << center << " with radius " << radius << '\n';
  }

 private:
  Coord center;
  int radius;
};