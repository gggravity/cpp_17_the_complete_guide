//
// Created by martin on 04/02/2023.
//

#include "foldtraverse.hpp"
#include <iostream>

using namespace std;

int main ()
{
  Node *root { new Node { 0 } };
  root->sub_left = new Node { 1 };
  root->sub_left->sub_right = new Node { 2 };

  Node *node = Node::traverse(root, Node::left, Node::right);
  cout << node->get_value() << '\n';

  node = root->*Node::left->*Node::right;
  cout << node->get_value() << '\n';

  node = root->sub_left->sub_right;
  cout << node->get_value() << '\n';
}