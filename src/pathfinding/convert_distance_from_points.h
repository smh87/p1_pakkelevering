#include <stdio.h>
#include <math.h>

#define R 6371e3;

struct gps_point{
    double latitude;
    double longitude;
};

double calculate_distance_to_points(struct gps_point *point1, struct gps_point *point2);
double calculate_distance_to_points_2(struct gps_point *point1, struct gps_point *point2);
double calculate_distance_to_points_3(struct gps_point *point1, struct gps_point *point2);