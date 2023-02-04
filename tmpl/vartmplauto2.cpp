//
// Created by martin on 04/02/2023.
//

#include "vartmplauto.hpp"
#include <iostream>

void print_array()
{
  std::cout << "array<int, 5>  :   ";

  for (const auto& elem : array<int,5>)
    {
      std::cout << elem << ' ';
    }

  std::cout << "\narray<int, 5u> :   ";

  for (const auto & elem: array<int, 5u>)
    {
      std::cout << elem << ' ';
    }
    std::cout << '\n';
}