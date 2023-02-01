#include <string>
#include <iostream>

using namespace std;

struct My_data
{
    inline static string g_name = "global";
    inline static thread_local string t_name = "tls";
    string l_name = "local";

    void print (const string &message) const
    {
      cout << message << '\n';
      cout << "- g_name: " << g_name << '\n';
      cout << "- t_name: " << t_name << '\n';
      cout << "- l_name: " << l_name << '\n';
    }
};

inline thread_local My_data my_thread_data;