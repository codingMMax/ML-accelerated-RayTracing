//
// Created by MaxHu on 2023/11/13.
//

#include "interval.h"

double interval:: clamp(double x) const{
    if(x < min) return min;
    if(x > max) return max;
    return x;
}

double interval::size() const {
    return max - min;
}

interval interval::expand(double delta) const {

    auto padding = delta / 2;
    return interval(min - padding, max + padding);
}


