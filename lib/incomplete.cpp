//
// Created by martin on 2/9/23.
//

#include <bits/stdc++.h>
#include "incomplete.hpp"

using namespace std;

int main ()
{
  Node root { "top" };

  root.add(Node { "elem1" });
  root.add(Node { "elem2" });
  root.add(Node { "elem3" });
  root.add(Node { "elem4" });

  root[0].add(Node { "elem1.1" });
  root[1].add(Node { "elem2.1" });
  root[1].add(Node { "elem2.2" });

  root[1][0].add(Node { "elem2.1.1" });
  root[1][0].add(Node { "elem2.1.2" });
  root[1][0].add(Node { "elem2.1.3" });


  root.print();

}
