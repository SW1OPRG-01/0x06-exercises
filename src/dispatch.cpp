#include "dispatch.h"

// double distance(Vehicle c, GeoLocation p) {
//   return calculateDistance(c.location, p);
// }

double distance(Vehicle c, GeoLocation p) {
  return calculate_distance(c.location, p);
}

NearestVehicle nearest_vehicle(vector<Vehicle> fleet, GeoLocation p) {
  if(fleet.empty()) {
    return { -1, -1 };
  }

  int index = 0;
  double nearest = distance(fleet.at(0), p);
  for(int i = 1; i < fleet.size(); ++i) {
    double current = distance(fleet[i], p);
    if(current < nearest) {
      index = i;
      nearest = current;
    }
  }

  return { nearest, index };
}

// 56.15778593459423 10.193658894032932