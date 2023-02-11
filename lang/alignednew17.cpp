//
// Created by martin on 2/11/23.
//

#include <bits/stdc++.h>

using namespace std;

struct My_type
{
    int i { };
    char c { };
    string s[4];
};

struct alignas(32) My_type_32
{
    int i { };
    char c { };
    string s[4];
};

struct alignas(64) My_type_64
{
    int i { };
    char c { };
    string s[4];
};

struct alignas(128) My_type_128
{
    int i { };
    char c { };
    string s[4];
};



int main ()
{
  auto p = new My_type;
  auto p32 = new My_type_32;
  auto p64 = new My_type_64;
  auto p128 = new My_type_128;

  cout << "sizeof(*p):   " << sizeof(*p) << '\n';
  cout << "sizeof(*p32): " << sizeof(*p32) << '\n';
  cout << "sizeof(*p64): " << sizeof(*p64) << '\n';
  cout << "sizeof(*p128): " << sizeof(*p128) << '\n';

  delete p;
}