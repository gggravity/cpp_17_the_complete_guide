//
// Created by martin on 01/02/2023.
//

struct Derived;

struct Base
{
  friend struct Derived;
 private:
  Base ()
  {

  }
};

struct Derived : Base
{

};

int main ()
{
//  Derived d1 {}; // ERROR: Base class 'Base' has private default constructor
  Derived d2;
}