//
// Created by martin on 05/02/2023.
//

#pragma once

#include "permAsString.hpp"
#include <string>
#include <chrono>
#include <filesystem>

std::string as_string (const std::filesystem::perms &pm)
{
  using perms = std::filesystem::perms;
  std::string s;
  s.resize(9);

  s[0] = (pm & perms::owner_read) != perms::none ? 'r' : '-';
  s[1] = (pm & perms::owner_write) != perms::none ? 'w' : '-';
  s[2] = (pm & perms::owner_exec) != perms::none ? 'x' : '-';
  s[3] = (pm & perms::group_read) != perms::none ? 'r' : '-';
  s[4] = (pm & perms::group_write) != perms::none ? 'w' : '-';
  s[5] = (pm & perms::group_exec) != perms::none ? 'x' : '-';
  s[6] = (pm & perms::others_read) != perms::none ? 'r' : '-';
  s[7] = (pm & perms::others_write) != perms::none ? 'w' : '-';
  s[8] = (pm & perms::others_exec) != perms::none ? 'x' : '-';

  return s;
}