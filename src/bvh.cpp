//
// Created by MaxHu on 2023/11/21.
//

#include "bvh.h"

bool bvh_node::hit(const ray &r, interval ray_t, hit_record &rec) const {
    if(!bbox.hit(r, ray_t))
        return false;
    bool hit_left = left->hit(r,ray_t, rec);
    bool hit_right = right->hit(r, interval(ray_t.min, hit_left ? rec.t : ray_t.max), rec);

    return hit_left || hit_right;
}

bvh_node::bvh_node(const std::vector<shared_ptr<hittable>> &src_objects, size_t start, size_t end) {
    auto objects = src_objects; // Create a modifiable array of the source scene objects

    int axis = random_int(0,2);
    auto comparator = (axis == 0) ? box_x_compare
                                  : (axis == 1) ? box_y_compare
                                                : box_z_compare;
    auto vol_comparator = box_vol_compare;
    
    size_t object_span = end - start;

    if (object_span == 1) {
        left = right = objects[start];
    } else if (object_span == 2) {
        if (comparator(objects[start], objects[start+1])) {
            left = objects[start];
            right = objects[start+1];
        } else {
            left = objects[start+1];
            right = objects[start];
        }
    } else {
        // std::sort(objects.begin() + start, objects.begin() + end, comparator);
        // std::sort(objects.begin() + start, objects.begin() + end, vol_comparator);
        auto mid = start + object_span/2;
        left = make_shared<bvh_node>(objects, start, mid);
        right = make_shared<bvh_node>(objects, mid, end);
    }





    bbox = aabb(left->bounding_box(), right->bounding_box());
}
