//
// Created by martin on 02/02/2023.
//

#include <iostream>
#include <vector>

using namespace std;

void print_10_elements (const vector<int> &v)
{
  for (int i = 0 ; i < 10 ; ++i)
    {
      cout << "value: " << v.at(i) << '\n';
    }
}

int main ()
{
  try
    {
      vector<int> vec { 7, 14, 21, 28 };
      print_10_elements(vec);

    }
  catch (const exception &e)
    {
      cerr << "EXCEPTION: " << e.what() << '\n';
    }
  catch (...)
    {
      cerr << "EXCEPTION of unknown type\n";
    }
}