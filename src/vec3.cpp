//
// Created by MaxHu on 2023/11/12.
//

#include "vec3.h"
#include "util.h"

vec3 vec3::random() {
    return vec3(random_double(), random_double(), random_double());
}

vec3 vec3::random(double min, double max) {
    return vec3(random_double(min, max), random_double(min, max), random_double(min, max));
}
