//
// Created by MaxHu on 2023/11/13.
//

#ifndef HITTABLE_H
#define HITTABLE_H

#include "util.h"
//#include "ray.h"
//#include "interval.h"
#include "aabb.h"
class material;


class hit_record{
public:
    point3 p;
    vec3 normal;
    std::shared_ptr<material> mat;
    double t;
    bool front_face;

    void set_face_normal(const ray& r, const vec3 & outward_normal);
};

class hittable {
public:
    virtual ~hittable() = default;
    hittable() = default;
    virtual bool hit(const ray& r, interval ray_t, hit_record& rec) const = 0;
    virtual aabb bounding_box() const = 0;
};


#endif //HITTABLE_H
