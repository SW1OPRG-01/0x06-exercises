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
  Type type;
  int number;
  GeoLocation location;
};

void print_vehicle(Vehicle);
string type(Type);