//
// Created by martin on 05/02/2023.
//

#include "permAsString.hpp"
#include <iostream>
#include <string>

int main ()
{
  namespace fs = std::filesystem;

  fs::path path { "." };

  for (const auto &entry : fs::directory_iterator { path })
    {
      std::cout << entry.path().string() << " : "
                << as_string(status(entry.path()).permissions())
                << '\n';
    }
}
