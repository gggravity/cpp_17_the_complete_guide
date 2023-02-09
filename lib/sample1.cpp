//
// Created by martin on 2/8/23.
//

#include <bits/stdc++.h>

using namespace std;

int main ()
{
  vector<string> collection;

  for (int i { 0 } ; i < 10'000 ; ++i)
    {
      collection.push_back("value" + to_string(i));
    }

  sample(collection.begin(), collection.end(),
         ostream_iterator<string> { cout, "\n" },
         10,
         default_random_engine { });
}