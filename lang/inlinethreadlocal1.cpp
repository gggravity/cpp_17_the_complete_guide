#include "inlinethreadlocal.hpp"
#include <thread>

void foo ();

int main ()
{
  my_thread_data.print("main() begin:");

  my_thread_data.g_name = "thread1 name";
  my_thread_data.t_name = "thread1 name";
  my_thread_data.l_name = "thread1 name";
  my_thread_data.print("main() later:");

  thread t(foo);
  t.join();

  my_thread_data.print("main() end:");
}