//
// Created by MaxHu on 2023/11/13.
//

#ifndef HITTABLE_LIST_H
#define HITTABLE_LIST_H
#include "hittable.h"
#include <memory>
#include <vector>

using std::shared_ptr;
using std::make_shared;

class hittable_list : public hittable{
private:
    aabb bbox;

public:
    std::vector<shared_ptr<hittable>> objects;

    void clear();
    void add(shared_ptr<hittable> object);

    hittable_list()= default;
    hittable_list(shared_ptr<hittable> object) {
        add(object);
    }
    bool hit(const ray& r, interval ray_t, hit_record& rec) const override;
    aabb bounding_box() const override {return bbox;}
};


#endif //HITTABLE_LIST_H
