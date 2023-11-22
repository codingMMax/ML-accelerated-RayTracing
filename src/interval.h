//
// Created by MaxHu on 2023/11/13.
//

#ifndef INTERVAL_H
#define INTERVAL_H
#include "util.h"
#include <cstdlib>
#include <cmath>


class  interval {
public:
    double min, max;
    interval():min(+infinity), max(-infinity){}

    interval(double _min, double _max): min(_min), max(_max) {}

    interval(const interval& a, const interval& b): min(fmin(a.min, b.min)), max(fmax(a.max, b.max)) {}

    bool contains(double x) const{
        return min <= x && x <= max;
    }

    bool surrounds(double x) const{
        return min < x && x < max;
    }

    double size() const;

    double clamp(double x) const;

    static const interval empty, universe;

    interval expand(double delta) const;
};

const static interval empty (+infinity, -infinity);
const static interval universe (-infinity, +infinity);





#endif //INTERVAL_H
