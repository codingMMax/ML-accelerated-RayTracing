//
// Created by MaxHu on 2023/11/13.
//

#ifndef SPHERE_H
#define SPHERE_H

#include "hittable.h"
#include "vec3.h"

class sphere : public hittable{
private:
    point3 center;
    double radius;
public:
    sphere(point3 _center, double _radius) : center(_center), radius(_radius) {}
    bool hit(const ray& r, interval ray_t, hit_record& rec) const override;

};


#endif //SPHERE_H
