//
// Created by MaxHu on 2023/11/13.
//

#ifndef SPHERE_H
#define SPHERE_H

#include "hittable.h"
#include "vec3.h"

class sphere : public hittable{
private:
    point3 center1;
    bool is_moving;
    vec3 center_vec;
    double radius;
    shared_ptr<material> mat;
    point3 sphere_center(double time) const{
        return center1 + time * center_vec;
    }
public:
    // moving sphere
    sphere(point3 _center1, point3 _center2, double _radius, shared_ptr<material>_material) : center1(_center1), center_vec(_center2 - _center1), radius(_radius), mat(_material) {}
    bool hit(const ray& r, interval ray_t, hit_record& rec) const override;
    // stationary sphere
    sphere(point3 _center, double _radius, shared_ptr<material> _material): center1(_center), radius(_radius), mat(_material), is_moving(true) {}
};


#endif //SPHERE_H
