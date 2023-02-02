//
// Created by martin on 02/02/2023.
//

#include <iostream>
#include <string>
#include <thread>
#include <utility>

using namespace std;
using namespace literals;

class Data
{
 public:
  explicit Data (string name) :
      name(std::move(name))
  {

  }

  [[nodiscard]] auto start_thread_with_copy_of_this () const
  {
    thread t { [*this] ()
               {
                   this_thread::sleep_for(3s);
                   cout << name << endl;
               } };
    return t;
  }

  virtual ~Data ()
  {
    cout << "D destroyed." << endl;
  }

 private:
  string name;
};

int main ()
{
  thread t;
  Data d { "C1" };
  t = d.start_thread_with_copy_of_this();
  t.join();
}