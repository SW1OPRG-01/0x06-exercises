#include <vector>
#include "vehicle.h"

struct NearestVehicle {
  double distance;
  int index;
};

NearestVehicle nearest_vehicle(vector<Vehicle>, GeoLocation);
double distance(Vehicle, GeoLocation);