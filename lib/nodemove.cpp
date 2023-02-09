//
// Created by martin on 2/9/23.
//

#include <bits/stdc++.h>

using namespace std;

template < typename T1, typename T2 >
void print (const T1 &coll1, const T2 &coll2)
{
  cout << "values:\n";
  for (const auto &[key, value] : coll1)
    {
      cout << " [" << key << " : " << value << "]";
    }

  cout << '\n';

  for (const auto &[key, value] : coll2)
    {
      cout << " [" << key << " : " << value << "]";
    }

  cout << '\n';
}

int main ()
{
  multimap<double, string> src
      {
          { 1.1, "one" },
          { 2.2, "two" },
          { 3.3, "three" }
      };

  map<double, string> dst
      {
          { 3.3, "old data" }
      };

  print(src, dst);

  dst.insert(src.extract(src.find(1.1)));
  dst.insert(src.extract(2.2));

  print(src, dst);

  auto [pos, done, node] = dst.insert(src.extract(3.3));

  if (!done)
    {
      cout << "insert() of node handle failed:"
           << " tried to insert '" << node.key()
           << "' with value '" << node.mapped()
           << "' bu key exists with value '" << pos->second << "'\n";
    }
}