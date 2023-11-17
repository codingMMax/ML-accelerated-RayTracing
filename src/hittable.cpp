//
// Created by MaxHu on 2023/11/13.
//

#include "hittable.h"
#include "material.h"

void hit_record:: set_face_normal(const ray& r, const vec3 & outward_normal){
    front_face = dot(r.direction(), outward_normal) < 0;
    normal = front_face ? outward_normal : -outward_normal;
}

bool hittable::hit(const ray &r, interval ray_t, hit_record &rec) const {
    return false;
}
