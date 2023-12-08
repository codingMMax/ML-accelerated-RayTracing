//
// Created by MaxHu on 2023/11/21.
//

#ifndef INC_669RAYTRACING_AABB_H
#define INC_669RAYTRACING_AABB_H

#include "interval.h"
#include "ray.h"
class aabb {
public:
    interval x, y, z;
    double vol;
    aabb() = default;
    aabb(const interval& ix, const interval& iy,const interval& iz): x(ix), y(iy), z(iz), vol((x.max - x.min) * (y.max - y.min) * (z.max - z.min)){}
    aabb(const point3& a, const point3& b){
        x = interval(fmin(a[0],b[0]), fmax(a[0], b[0]));
        y = interval(fmin(a[1], b[1]),fmax(a[1],b[1]));
        z = interval(fmin(a[2], b[2]), fmax(a[2],b[2]));
        vol = (x.max - x.min) * (y.max - y.min) * (z.max - z.min);
    }
    aabb(const aabb& box0, const aabb& box1) {
        x = interval(box0.x, box1.x);
        y = interval(box0.y, box1.y);
        z = interval(box0.z, box1.z);
        vol = (x.max - x.min) * (y.max - y.min) * (z.max - z.min);
    }


    const interval& axis(int n) const;

    bool hit(const ray& r, interval ray_t ) const;

};


#endif //INC_669RAYTRACING_AABB_H
