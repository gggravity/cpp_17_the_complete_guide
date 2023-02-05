//
// Created by martin on 05/02/2023.
//

#include <variant>
#include <vector>
#include "Line.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"

using namespace std;

using GeoObj = variant<Line, Circle, Rectangle>;

vector<GeoObj> create_figure ()
{
  vector<GeoObj> f;
  f.push_back(Line { Coord { 1, 2 }, Coord { 3, 4 } });
  f.push_back(Circle { Coord { 5, 5 }, 2 });
  f.push_back(Rectangle { Coord { 3, 3 }, Coord { 6, 4 } });
  return f;
}

int main ()
{
  vector<GeoObj> figure = create_figure();
  for (const GeoObj &geo_obj : figure)
    {
      visit([] (const auto &obj)
            {
                obj.draw();
            }, geo_obj);
    }
}