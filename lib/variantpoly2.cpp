//
// Created by martin on 05/02/2023.
//

#include <iostream>
#include <string>
#include <variant>
#include <vector>
#include <type_traits>

using namespace std;

int main ()
{
  using Var = variant<int, double, string>;

  vector<Var> values { 42, 0.19, "hello world", 0.815 };

  for (const Var &value : values)
    {
      visit([] (const auto &v)
            {
                if constexpr (is_same_v<decltype(v), const string &>)
                  {
                    cout << '"' << v << "\" ";
                  }
                else
                  {
                    cout << v << ' ';
                  }
            }, value);
    }
}