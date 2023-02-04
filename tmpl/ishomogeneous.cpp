//
// Created by martin on 04/02/2023.
//

#include <type_traits>
#include <iostream>

using namespace std;

template < typename T1, typename... TN >
struct is_homogeneous_types
{
    static constexpr bool value = (is_same_v<T1, TN> && ...);
};

template < typename T1, typename... TN >
constexpr bool is_homogeneous_args (T1, TN...)
{
  return (is_same_v<T1, TN> && ...);
}

struct Size
{

};

int main ()
{
  cout << boolalpha;
  cout << is_homogeneous_types<int, Size, decltype(42)>::value << '\n';
  cout << is_homogeneous_types<int, decltype(42)>::value << '\n';

  cout << is_homogeneous_args(43, -1, "hello", nullptr) << '\n';
  cout << is_homogeneous_args(43, -1, 123, -31) << '\n';
}