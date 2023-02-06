//
// Created by martin on 2/6/23.
//

#include <bits/stdc++.h>
#include <execution>

using namespace std;
namespace fs = std::filesystem;

int main (int argc, char *argv[])
{
  if (argc < 2)
    {
      cout << "Usage: " << argv[0] << " <path> \n";
      return EXIT_FAILURE;
    }

  fs::path root { argv[1] };

  vector<fs::path> paths;

  try
    {
      fs::recursive_directory_iterator dir_position { root };
      copy(begin(dir_position), end(dir_position), back_inserter(paths));
    }
  catch (const exception &e)
    {
      cerr << "EXCEPTION: " << e.what() << endl;
    }

  auto size = transform_reduce(
      execution::par,
      paths.begin(),
      paths.end(),
      ::uintmax_t { 0 },
      plus<>(),
      [] (const fs::path &p)
      {
          return fs::is_regular_file(p) ? fs::file_size(p)
                                        : ::uintmax_t { 0 };
      }
  );

  cout << "size of all " << paths.size() << " regular files: " << size/1'000'000 << " MB" << '\n';
}