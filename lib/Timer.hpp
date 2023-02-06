//
// Created by martin on 2/6/23.
//

#pragma once

#include <bits/stdc++.h>

using namespace std;

class Timer
{
 public:
  explicit Timer () :
      last { chrono::steady_clock::now() }
  {

  }

  void print_diff (const string &msg = "timer diff: ")
  {
    auto now { chrono::steady_clock::now() };
    chrono::duration<double, milli> diff { now - last };
    cout << msg << diff.count() << "ms\n";
    last = chrono::steady_clock::now();
  }

 private:
  chrono::steady_clock::time_point last;
};