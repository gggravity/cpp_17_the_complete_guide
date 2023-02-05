//
// Created by martin on 05/02/2023.
//

#pragma once

#include "Coord.hpp"
#include <iostream>

class Rectangle
{

 public:
  Rectangle (Coord f, Coord t) :
      from { f },
      to { t }
  {
  }

  void move (const Coord &c)
  {
    from += c;
    to += c;
  }

  void draw () const
  {
    std::cout << "rectangle from " << from << " to " << to << '\n';
  }

 private:
  Coord from;
  Coord to;
};
