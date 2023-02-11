//
// Created by martin on 2/11/23.
//

#include <bits/stdc++.h>
#include "pmrcustomer.hpp"
#include "tracker.hpp"

using namespace std;

int main ()
{
  Tracker tracker;
  pmr::vector<Pmr_customer> collection(&tracker);
  collection.reserve(100);

  Pmr_customer c1 { "Peter, Paul & Mary" };
  collection.push_back(c1);
  collection.push_back(std::move(c1));

  for (const auto &customer : collection)
    {
      cout << customer.get_name() << '\n';
    }

}