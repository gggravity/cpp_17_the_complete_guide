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

  namespace fs = std::filesystem;

  switch (fs::path path { argv[1] }; status(path).type())
    {
      case fs::file_type::not_found:
        {
          cout << "path \"" << path.string() << "\" does not exist\n";
          break;
        }

      case fs::file_type::regular:
        {
          cout << "path \"" << path.string() << "\" exists with "
               << file_size(path) << " bytes\n";
          break;
        }

      case fs::file_type::directory:
        {
          cout << '"' << path.string() << "\" is a directory containing:\n";
          for (const auto &entry : fs::directory_iterator { path })
            {
              cout << "  " << entry.path().string() << '\n';
            }
          break;
        }

      default:
        cout << '"' << path.string() << "\" is a special file\n";
    }
}