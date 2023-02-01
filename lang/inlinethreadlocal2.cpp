#include "inlinethreadlocal.hpp"

void foo()
{
  my_thread_data.print("foo() begin:");

  my_thread_data.g_name = "thread2 name";
  my_thread_data.t_name = "thread2 name";
  my_thread_data.l_name = "thread2 name";

  my_thread_data.print("foo() end:");
}