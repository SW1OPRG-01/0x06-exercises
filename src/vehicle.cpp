#include <iostream>
#include "vehicle.h"

void print_vehicle(Vehicle v) {
  cout << (type(v.type)) << " " << v.number << " (" << v.make << " " << v.model << ")" << endl;
}

string type(Type type) {
  switch (type)
  {
  case BRAVO:
    return "BRAVO";
  case HOTEL:
    return "HOTEL";
  case ROMEO:
    return "ROMEO";
  default:
    return "";
  }
}