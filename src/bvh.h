//
// Created by MaxHu on 2023/11/21.
//

#ifndef INC_669RAYTRACING_BVH_H
#define INC_669RAYTRACING_BVH_H

//#include "hittable.h"
#include "hittable_list.h"
#include "util.h"
#include <algorithm>

class bvh_node : public hittable{
private:
    shared_ptr<hittable> left;
    shared_ptr<hittable> right;
    aabb bbox;
    static bool box_compare(
            const shared_ptr<hittable> a, const shared_ptr<hittable> b, int axis_index
    ) {
        return a->bounding_box().axis(axis_index).min < b->bounding_box().axis(axis_index).min;
    }

    static bool box_x_compare (const shared_ptr<hittable> a, const shared_ptr<hittable> b) {
        return box_compare(a, b, 0);
    }

    static bool box_y_compare (const shared_ptr<hittable> a, const shared_ptr<hittable> b) {
        return box_compare(a, b, 1);
    }

    static bool box_z_compare (const shared_ptr<hittable> a, const shared_ptr<hittable> b) {
        return box_compare(a, b, 2);
    }
public:
    bvh_node(const hittable_list& list) : bvh_node(list.objects, 0, list.objects.size()){}
    bvh_node(const std::vector<shared_ptr<hittable>>& src_objects, size_t start, size_t end);

    bool hit(const ray& r, interval ray_t, hit_record& rec) const override;
    aabb bounding_box() const override {return bbox;}
    inline int random_int(int min, int max){
        return static_cast<int>(random_double(min, max+1));
    }
};


#endif //INC_669RAYTRACING_BVH_H
