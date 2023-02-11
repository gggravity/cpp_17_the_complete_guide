//
// Created by martin on 2/11/23.
//

#include <bits/stdc++.h>
#include "tracknew.hpp"

using namespace std;

int main ()
{
  TrackNew::reset();
  TrackNew::trace(true);

  string s { "string value with 26 chars" };
  auto p1 { new string { "an initial value with 35 chars" } };
  auto p2 { new(align_val_t { 64 }) string[4] };
  auto p3 { new string[4] { "7 chars", "x", "or 11 chars", "a string value with 28 chars" } };

  TrackNew::status();

  delete p1;
  delete[] p2;
  delete[] p3;
}