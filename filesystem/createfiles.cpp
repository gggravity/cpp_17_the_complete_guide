//
// Created by martin on 05/02/2023.
//

#include <iostream>
#include <fstream>
#include <filesystem>
#include <cstdlib>

using namespace std;

int main ()
{
  namespace fs = std::filesystem;

  try
    {
      fs::path test_dir { "tmp/test" };
      fs::create_directories(test_dir);

      auto test_file = test_dir / "data.txt";
      ofstream data_file { test_file };
      if (!data_file)
        {
          cerr << "OOPS, can't open \"" << test_file.string() << "\"\n";
          exit(EXIT_FAILURE);
        }
      data_file << "The answer is 42\n";

      fs::create_directory_symlink("test", test_dir.parent_path() / "slink");
    }
  catch (const fs::filesystem_error &e)
    {
      cerr << "EXCEPTION: " << e.what() << '\n';
      cerr << "    path1: " << e.path1().string() << "\"\n";
    }

  cout << fs::current_path().string() << ":\n";

  auto directory_options { fs::directory_options::follow_directory_symlink };
  for (const auto &entry : fs::recursive_directory_iterator(".", directory_options))
    {
      cout << "  " << entry.path().lexically_normal().string() << '\n';
    }
}