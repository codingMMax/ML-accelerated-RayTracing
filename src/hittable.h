//
// Created by MaxHu on 2023/11/13.
//

#ifndef HITTABLE_H
#define HITTABLE_H

#include "ray.h"
#include "util.h"
#include "interval.h"

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
    virtual bool hit(const ray& r, interval ray_t, hit_record& rec) const;
};


#endif //HITTABLE_H
