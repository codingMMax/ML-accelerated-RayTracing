//
// Created by MaxHu on 2023/11/12.
//
#ifndef UTIL_H
#define UTIL_H

#include "vec3.h"
#include <cmath>
#include <cstdlib>
#include <limits>
#include <memory>
#include <random>
#include <chrono>

inline double linear_to_gamma(double linear_component){
    return sqrt(linear_component);
}


void write_color(std::ostream &out, color pixel_color, int samples_per_pixel);

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

inline double random_double(){

    static std::uniform_real_distribution<double> distribution(0.0, 1.0);
    static std::mt19937 generator;
    return distribution(generator);
}

inline double random_double(double min, double max){
    double toReturn = min + (max - min) * random_double();
    return toReturn;
}



#endif //UTIL_H
