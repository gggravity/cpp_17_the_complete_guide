//
// Created by martin on 05/02/2023.
//

#pragma once

#include <iostream>

class Coord
{
 public:
  // default constructor:
  Coord () : x { 0 }, y { 0 }
  {
  }

  // other constructor:
  Coord (int new_x, int new_y) :
      x { new_x },
      y { new_y }
  {
  }

  friend Coord operator+ (Coord c1, Coord c2)
  {  // plus
    return Coord { c1.x + c2.x, c1.y + c2.y };
  }

  friend Coord operator- (Coord c1, Coord c2)
  {  // diff
    return Coord { c1.x - c2.x, c1.y - c2.y };
  }

  Coord operator- () const
  {  // negate
    return Coord { -x, -y };
  }

  void operator+= (Coord c)
  {  // +=
    *this = *this + c;  // or: x+=c.x, y+=c.y
  }

  void operator-= (Coord c)
  {   // +=
    operator+=(-c);     // or as above
  }

  [[nodiscard]] int get_X () const
  {
    return x;
  }

  [[nodiscard]] int get_Y () const
  {
    return y;
  }

  friend std::ostream &operator<< (std::ostream &strm, Coord c)
  {
    return strm << '(' << c.x << ',' << c.y << ')';
  }

 private:
  int x;     // x coordinate
  int y;     // y coordinate
};
