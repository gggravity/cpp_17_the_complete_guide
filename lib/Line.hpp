//
// Created by martin on 05/02/2023.
//

#pragma once

#include "Coord.hpp"
#include <iostream>

class Line
{
 public:
  Line (Coord from, Coord to) :
      from { from },
      to { to }
  {
  }

  void move (const Coord &c)
  {
    from += c;
    to += c;
  }

  void draw () const
  {
    std::cout << "line from " << from << " to " << to << '\n';
  }

 private:
  Coord from;
  Coord to;
};