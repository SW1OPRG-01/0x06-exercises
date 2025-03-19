#include "geo_location.h"
#include <cmath>

using namespace std;

// Convert degrees to radians
double to_rad(double deg) {
    return deg * M_PI / 180.0;
}

// Calculate distance using Haversine formula
double calculate_distance(GeoLocation loc1, GeoLocation loc2) {
    // Earth radius in kilometers
    const double radius = 6371.0;

    // Convert latitude and longitude from degrees to radians
    loc1.latitude = to_rad(loc1.latitude);
    loc1.longitude = to_rad(loc1.longitude);
    loc2.latitude = to_rad(loc2.latitude);
    loc2.longitude = to_rad(loc2.longitude);

    // Haversine formula
    double dLat = loc2.latitude - loc1.latitude;
    double dLon = loc2.longitude - loc1.longitude;
    double a = sin(dLat / 2) * sin(dLat / 2) +
               cos(loc1.latitude) * cos(loc2.latitude) *
               sin(dLon / 2) * sin(dLon / 2);
    double c = 2 * atan2(sqrt(a), sqrt(1 - a));
    double distance = radius * c;

    return distance;
}