//
// Created by martin on 05/02/2023.
//

#include <iostream>
#include <filesystem>
#include <cstdlib>

using namespace std;

int main (int argc, char *argv[])
{
  if (argc < 2)
    {
      cout << "Usage: " << argv[0] << " <path> \n";
      return EXIT_FAILURE;
    }

  filesystem::path path { argv[1] };

  if (filesystem::is_regular_file(path))
    {
      cout << path << " exists with " << filesystem::file_size(path) << " bytes\n";
    }
  else if (filesystem::is_directory(path))
    {
      cout << path << " is a directory containing:\n";
      for (const auto &entry : filesystem::directory_iterator { path })
        {
          cout << "  " << entry.path() << '\n';
        }
    }
  else if (filesystem::exists(path))
    {
      cout << path << " is a special file\n";
    }
  else
    {
      cout << "path: " << path << " does not exit\n";
    }
}