//
// Created by MaxHu on 2023/11/16.
//

#ifndef INC_669RAYTRACING_MATERIAL_H
#define INC_669RAYTRACING_MATERIAL_H
#include "ray.h"
//#include "hittable.h"

class hit_record;

class material{
public:
    virtual ~material() = default;
    material() = default;
    virtual bool scatter(const ray& r_in, const hit_record &rec, color & attenuation, ray& scattered) const = 0;
};

class lambertian : public material{
private:
    color albedo;
public:
    lambertian(const color &a);
    bool scatter(const ray&r_in, const hit_record& rec, color& attenuation, ray& scattered) const override;
};


class metal : public material{
private:
    color albedo;
public:
    metal(const color &a) : albedo(a) {};
    bool scatter(const ray& r_in, const hit_record& rec, color& attenuation, ray& scattered) const override;

};


#endif //INC_669RAYTRACING_MATERIAL_H
