#pragma once

#include "geo_location.h"
#include <string>

using namespace std;

enum Type {
  BRAVO,
  HOTEL,
  ROMEO
};

struct Vehicle {
  string make, model;
  int number;
  GeoLocation location;
  Type type;
};

void print_vehicle(Vehicle);
string type(Type);