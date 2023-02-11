//
// Created by martin on 2/11/23.
//

#pragma once

#include <bits/stdc++.h>

template < typename Callable, typename... Args >
void call (Callable &&op, Args &&... args)
{
  std::invoke(std::forward<Callable>(op), std::forward<Args>(args)...);
}
