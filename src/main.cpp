#include <iostream>
#include <vector>
#include "vehicle.h"
#include "dispatch.h"

using namespace std;

int main() {
  Vehicle b0 = { "BMW", "M3", BRAVO, 1, { 56.08879136135274, 10.2233311613884 }}; // Moesgaard Museum
  Vehicle b1 = { "Volkswagen", "Golf", BRAVO, 3, { 56.127760815765505, 10.20281162730732 }}; // Marselisborg Palace
  Vehicle b2 = { "Honda", "Accord", BRAVO, 4, { 56.17100325888462, 10.19929977544253 }}; // Aarhus University
  Vehicle h1 = { "Volkswagen", "Golf", HOTEL, 1, { 56.15255312320674, 10.203038127629382 }}; //Aarhus City Hall
  Vehicle h2 = { "Fiat", "500", HOTEL, 6, { 56.16217140423636, 10.18949261907776 }}; // Botanical Garden and Greenhouses
  Vehicle r0 = { "Fiat", "500", ROMEO, 1, { 56.153889095359624, 10.199705269637143 }}; // ARoS Aarhus Art Museum
  Vehicle r1 = { "Honda", "Civic", ROMEO, 2, { 56.150191891576384, 10.204729114263282 }}; // Aarhus Central Station

  vector<Vehicle> fleet = { b0, b1, b2, h1, h2, r0, r1 };

  double latitude, longitude;
  string type = "";
  while(true) {
    cout << "Enter coordinates: ";
    cin >> latitude >> longitude;
    NearestVehicle v = nearest_vehicle(fleet, { latitude, longitude });
    Vehicle closest_to_home = fleet.at(v.index);
    print_vehicle(closest_to_home);
    cout << v.distance << endl << endl;
  }
  
  return 0;
}
