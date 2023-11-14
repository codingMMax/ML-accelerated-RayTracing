#include "util.h"
#include "ray.h"
#include <iostream>
#include "hittable_list.h"
#include "sphere.h"
#include "camera.h"
// blendedValue = (1 - alpha) * startValue + alpha * endValue

int main()
{

    // Image layout
    hittable_list world;

    world.add(make_shared<sphere>(point3(0,0,-1), 0.5));
    world.add(make_shared<sphere>(point3(0,-100.5,-1), 100));

    camera cam;

    cam.aspect_ratio = 16.0 / 9.0;
    cam.image_width  = 400;
    cam.samples_per_pixel = 100;
    cam.render(world);

    return 0;
}