#include "util.h"
#include "ray.h"
#include <iostream>
#include "hittable_list.h"
#include "sphere.h"
#include "camera.h"
#include "material.h"
#include "bvh.h"
#include <omp.h>
int main() {
    hittable_list world;

    auto ground_material = make_shared<lambertian>(color(0.5, 0.5, 0.5));
    world.add(make_shared<sphere>(point3(0, -1000, 0), 1000, ground_material));


   int limits = 20;
    for(int factor = 20; factor <= limits; factor += 5) {
            // #pragma omp parallel for
        for (int a = -factor; a < factor; a++) {
            for (int b = -factor; b < factor; b++) {
                auto choose_mat = random_double();
                point3 center(a + 0.9 * random_double(), 0.2, b + 0.9 * random_double());
                // #pragma omp critical
                if ((center - point3(4, 0.2, 0)).length() > 0.9) {
                    shared_ptr<material> sphere_material;

                    if (choose_mat < 0.8) {
                        // diffuse
                        auto albedo = color::random() * color::random();
                        sphere_material = make_shared<lambertian>(albedo);
                        auto center2 = center + vec3(0, random_double(0, 0.5), 0);
                        world.add(make_shared<sphere>(center, center2, 0.2, sphere_material));
                    } else if (choose_mat < 0.95) {
                        // metal
                        auto albedo = color::random(0.5, 1);
                        auto fuzz = random_double(0, 0.5);
                        sphere_material = make_shared<metal>(albedo, fuzz);
                        world.add(make_shared<sphere>(center, 0.2, sphere_material));
                    } else {
                        // glass
                        sphere_material = make_shared<dielectric>(1.5);
                        world.add(make_shared<sphere>(center, 0.2, sphere_material));
                    }
                }
            }
        }
        auto material1 = make_shared<dielectric>(1.5);
        world.add(make_shared<sphere>(point3(0, 1, 0), 1.0, material1));

        auto material2 = make_shared<lambertian>(color(0.4, 0.2, 0.1));
        world.add(make_shared<sphere>(point3(-4, 1, 0), 1.0, material2));

        auto material3 = make_shared<metal>(color(0.7, 0.6, 0.5), 0.0);
        world.add(make_shared<sphere>(point3(4, 1, 0), 1.0, material3));

        std::chrono::time_point<std::chrono::system_clock> start, end;
        start = std::chrono::system_clock::now();

        size_t total_objects = world.objects.size();
        world = hittable_list(make_shared<bvh_node>(world));


        end = std::chrono::system_clock::now();
        auto duration = end - start;
        auto bvh_elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();

        camera cam;
        cam.aspect_ratio = 16.0 / 9.0;
        cam.image_width = 400;
        cam.samples_per_pixel = 10;
        cam.max_depth = 50;

        cam.vfov = 20;
        cam.lookfrom = point3(13, 2, 3);
        cam.lookat = point3(0, 0, 0);
        cam.vup = vec3(0, 1, 0);

        cam.defocus_angle = 0.6;
        cam.focus_dist = 10.0;

        start = std::chrono::system_clock::now();
        cam.render(world);
        end = std::chrono::system_clock::now();
        duration = end - start;
        auto render_elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
        std::cout << "Building BVH: " << total_objects << " objects " << (double)bvh_elapsed_time / 1000 << " s " << "Rendering " << (double)render_elapsed_time / 1000 << " s";
        // std::cout << "Building BVH:" << total_objects << " objects " << (double)bvh_elapsed_time / 1000 << " s\n";
        std::cout << " BVH / Rendering: " << "%" << 100.00 * (double)bvh_elapsed_time / render_elapsed_time  << std::endl;
    }

    return 0;

}