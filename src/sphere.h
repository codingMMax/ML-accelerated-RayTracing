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
    aabb bbox;
    shared_ptr<material> mat;
    point3 sphere_center(double time) const{
        return center1 + time * center_vec;
    }
public:

    bool hit(const ray& r, interval ray_t, hit_record& rec) const override;
    aabb bounding_box() const override{ return bbox;}
    // moving sphere
    sphere(point3 _center1, point3 _center2, double _radius, shared_ptr<material>_material) : center1(_center1),
    center_vec(_center2 - _center1), radius(_radius), mat(_material) {
        auto rvec = vec3(radius, radius, radius);
        aabb box1(_center1 - rvec, _center1 + rvec);
        aabb box2(_center2 - rvec, _center2 + rvec);
        bbox = aabb(box1, box2);
        center_vec = _center2 - _center1;
    }
    // stationary sphere
    sphere(point3 _center, double _radius, shared_ptr<material> _material): center1(_center),
    radius(_radius), mat(_material), is_moving(true) {
        auto rvec = vec3(radius, radius, radius);
        bbox = aabb(center1 - rvec, center1 + rvec);
    }
};


#endif //SPHERE_H
