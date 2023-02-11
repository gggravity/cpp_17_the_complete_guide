//
// Created by martin on 2/11/23.
//

#pragma once

#include <bits/stdc++.h>

using namespace std;

void d2str2d (double value1)
{
  cout << "in:     " << value1 << '\n';

  char str[1000];
  auto res1 { to_chars(str, str + 999, value1) };

  *res1.ptr = '\0';

  cout << "str:    " << str << '\n';
  assert(res1.ec == errc { });

  double value2 { };
  auto res2 { from_chars(str, str + 999, value2) };
  cout << "out:    " << value2 << '\n';
  assert(res2.ec == errc { });

  assert(value1 == value2);
}
