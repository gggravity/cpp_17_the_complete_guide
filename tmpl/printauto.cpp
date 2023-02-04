//
// Created by martin on 04/02/2023.
//
#include <iostream>

using namespace std;

template < auto separator = ' ', typename First, typename ... Args >
void print (const First &first, const Args &... args)
{
  cout << first;
  auto out_with_separator = [] (const auto &arg)
  {
      cout << separator << arg;
  };
  (..., out_with_separator(args));
  cout << '\n';
}


int main ()
{
  print("Hello", "World,", "der", "var", "en", "gang", "en", "mand!");

  print<','>("Hello", "World", "der", "var", "en", "gang", "en", "mand!");

  print<'-'>("Hello", 123.12, "der", "var", 321, "gang", "en", "mand!");

  static const char sep[] = ", ";
  print<sep>("Hello", 123.12, "der", "var", 321, "gang", "en", "mand!");
}