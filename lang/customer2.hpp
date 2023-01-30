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

  [[nodiscard]] const std::string &firstname () const
  {
    return first;
  }

  std::string &firstname ()
  {
    return first;
  }

  [[nodiscard]] const std::string &lastname () const
  {
    return last;
  }

  std::string &lastname ()
  {
    return last;
  }

  [[nodiscard]] long value () const
  {
    return val;
  }

  long &value ()
  {
    return val;
  }

 private:
  std::string first;
  std::string last;
  long val;
};
