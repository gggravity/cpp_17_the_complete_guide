//
// Created by martin on 02/02/2023.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
  initializer_list<double> values
      {
          0x1p4, // 16
          0xA, // 10
          0xAp2, // 40
          5e0, // 5
          0x1.4p+2, // 5
          1e5, // 100000
          0x1.86Ap+16, // 100000
          0xC.68p+2, // 49.625
      };

  for (auto d : values)
    {
      cout << "dec: " << setw(6) << defaultfloat << d << "  hex: " << hexfloat << d << '\n';
    }
}
