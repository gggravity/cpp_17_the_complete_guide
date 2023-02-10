//
// Created by martin on 2/9/23.
//

#include <bits/stdc++.h>

using namespace std;

struct Node
{
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
    }

    Node &operator[] (size_t index)
    {
      return children.at(index);
    }

    string value;

    vector<Node> children;
};

void find (const string &s, Node &node, Node *&rtn)
{
  for (auto &child : node.children)
    {
      if (child.value == s)
        {
          rtn = &child;
        }
      find(s, child, rtn);
    }
}

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

//  root.print();

  Node *np;
  find("elem2.2", root, np);
  cout << "\nreturn: " << np->value << endl;

  np->add(Node { "elem2.2.1" });

  root.print();

}
