//
// Created by martin on 2/10/23.
//

#include <bits/stdc++.h>

using namespace std;
using namespace chrono;
using namespace literals;

ostream &operator<< (ostream &os, const duration<double, milli> &duration)
{
  return os << duration.count() << "ms";
}

template < typename T >
void round_and_abs (T duration)
{
  cout << duration << '\n';
  cout << " abs():     " << abs(duration) << '\n';
  cout << " cast:      " << duration_cast<seconds>(duration) << '\n';
  cout << " floor():   " << floor < seconds > (duration) << '\n';
  cout << " ceil():    " << ceil < seconds > (duration) << '\n';
  cout << " round():   " << round < seconds > (duration) << '\n';
}

int main ()
{
  round_and_abs(3.33ms);
  cout << '\n';

  round_and_abs(3.77s);
  cout << '\n';

  round_and_abs(-3.77s);
}