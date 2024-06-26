#include <string>
#include <utility>  // for std::move()

class Customer
{
 public:
  Customer (std::string f, std::string l, long v) :
      first { std::move(f) },
      last { std::move(l) },
      val { v }
  {
  }

  [[nodiscard]] std::string getFirst () const
  {
    return first;
  }

  [[nodiscard]] std::string getLast () const
  {
    return last;
  }

  [[nodiscard]] long getValue () const
  {
    return val;
  }

 private:
  std::string first;
  std::string last;
  long val;

};
