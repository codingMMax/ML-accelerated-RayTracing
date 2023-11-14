//
// Created by MaxHu on 2023/11/13.
//

#ifndef INC_669RAYTRACING_CAMERA_H
#define INC_669RAYTRACING_CAMERA_H

#include "util.h"
#include "hittable.h"
class camera {
public:
    double aspect_ratio         = 1.0;
    int     image_width         = 100;
    int     samples_per_pixel   = 10;
    int     max_depth           = 10;
    void render(const hittable& world);

private:
    int    image_height;   // Rendered image height
    point3 center;         // Camera center
    point3 pixel00_loc;    // Location of pixel 0, 0
    vec3   pixel_delta_u;  // Offset to pixel to the right
    vec3   pixel_delta_v;  // Offset to pixel below

    void initialize();
    color ray_color(const ray&r,int depth ,const hittable& world) const;

    ray get_ray(int i, int j) const;

    vec3 pixel_sample_square() const;
};


#endif //INC_669RAYTRACING_CAMERA_H
