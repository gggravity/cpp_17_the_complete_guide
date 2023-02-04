//
// Created by martin on 04/02/2023.
//

#include <string>
#include <optional>
#include <iostream>
#include <utility>

using namespace std;

class Name
{
 public:
  Name (string first, optional<string> middle, string last) :
      first { std::move(first) },
      middle { std::move(middle) },
      last { std::move(last) }
  {

  }

  friend ostream &operator<< (ostream &os, const Name &name)
  {
    os << name.first << ' ';

    if (name.middle)
      {
        os << name.middle.value() << ' ';
      }

    //    os << name.middle.value_or("") << ' ';

    os << name.last;

    return os;
  }

 private:
  string first;
  optional<string> middle;
  string last;
};

int main ()
{
  Name n { "Jim", nullopt, "Knopf" };
  cout << n << '\n';

  Name m { "Donald", "Ervin", "Knuth" };
  cout << m << '\n';
}