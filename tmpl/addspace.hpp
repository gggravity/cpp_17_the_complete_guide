//
// Created by martin on 04/02/2023.
//

#pragma once

#include <iostream>

using namespace std;

template < typename T >
const T &spaces_before (const T &arg)
{
  cout << ' ';
  return arg;
}

template < typename First, typename... Args >
void print (const First &first_arg, const Args &... args)
{
  cout << first_arg;
  (cout << ... << spaces_before(args)) << '\n';
}