//
// Created by martin on 05/02/2023.
//

#include <optional>
#include <string_view>
#include <charconv>
#include <iostream>

using namespace std;

optional<int> as_int (string_view sv)
{
  int val;

  auto [ptr, ec] = from_chars(sv.data(), sv.data() + sv.size(), val);

  if (ec != errc { })
    {
      return nullopt;
    }
  return val;
}

int main ()
{
  for (auto s : { "42", "077", "hello", "0x33" })
    {
      if (optional<int> oi = as_int(s); oi)
        {
          cout << "convert '" << s << "' to int: " << *oi << '\n';
        }
      else
        {
          cout << "can't convert '" << s << "' to int\n";
        }
    }
}