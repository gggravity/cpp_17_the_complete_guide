//
// Created by martin on 04/02/2023.
//

#include <variant>
#include <string>
#include <iostream>

using namespace std;

int main ()
{
  variant<int, string> var { "hi" };
  cout << var.index() << '\n';
  var = 42;
  cout << var.index() << '\n';

  try
    {
      int i = get<0>(var);
      string s = get<string>(var);
    }
  catch (const bad_variant_access &e)
    {
      cerr << "EXCEPTION: " << e.what() << '\n';
    }
}