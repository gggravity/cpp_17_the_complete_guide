//
// Created by martin on 04/02/2023.
//

#include <optional>
#include <string>
#include <iostream>

using namespace std;

optional<int> as_int (const string &s)
{
  try
    {
      return stoi(s);
    }
  catch (...)
    {
      return nullopt;
    }
}

int main ()
{
  for (auto s : { "42", "077", "hello", "0x22" })
    {
      if (auto oi = as_int(s); oi)
        {
          cout << "convert '" << s << "' to int: " << *oi << '\n';
        }
      else
        {
          cout << "can't convert '" << s << "' to int\n";
        }
    }
}