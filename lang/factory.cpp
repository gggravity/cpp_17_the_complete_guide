//
// Created by martin on 02/02/2023.
//
#include "factory.hpp"
#include <memory>
#include <iostream>
#include <atomic>

using namespace std;

int main ()
{
  int i { create<int>(42) };
  unique_ptr<int> up { create<unique_ptr<int>>(new int { 42 }) };
  atomic<int> ai { create<atomic<int>>(42) };

  cout << "i:   " << i << endl;
  cout << "*up: " << *up << endl;
  cout << "ai:  " << ai << endl;
}