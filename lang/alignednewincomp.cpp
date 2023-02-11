//
// Created by martin on 2/11/23.
//

#include <bits/stdc++.h>

using namespace std;

void *operator new (size_t size, align_val_t)
{
  printf("::new called with size: %zu\n", size);
  return ::malloc(size);
}

int main ()
{
  struct alignas(64) S
  {
      int i;
  };

  S *p = new S;
}