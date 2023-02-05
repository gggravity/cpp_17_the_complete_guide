//
// Created by martin on 05/02/2023.
//

#include <variant>
#include <string>
#include <iostream>

using namespace std;

struct My_visitor
{
    void operator() (int i) const
    {
      cout << "int    : " << i << '\n';
    }

    void operator() (const string& s) const
    {
      cout << "string : " << s << '\n';
    }

    void operator() (double d) const
    {
      cout << "double : " << d << '\n';
    }
};

int main()
{
  variant<int, string , double> var(42);
  visit(My_visitor(), var);

  var = "Hello";
  visit(My_visitor(), var);

  var = 42.7;
  visit(My_visitor(), var);
}