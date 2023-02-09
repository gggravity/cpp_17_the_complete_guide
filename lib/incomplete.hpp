//
// Created by martin on 2/9/23.
//

#pragma once

#include <bits/stdc++.h>

using namespace std;

class Node
{
 public:
  explicit Node (string value) :
      value { std::move(value) },
      children { }
  {

  }

  void add (Node node)
  {
    children.push_back(std::move(node));
  }

  void print (int indent = 0) const
  {
    cout << string(indent, ' ') << value << '\n';
    for (const auto &node : children)
      {
        node.print(indent + 2);
      }
    //..
  }

  Node &operator[] (size_t index)
  {
    return children.at(index);
  }

  [[nodiscard]] const string &get_value () const
  {
    return value;
  }

 private:
  string value;

  vector<Node> children;

};