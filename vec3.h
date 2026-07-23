//
// Created by Avyukt Chamria on 23/07/26.
//

#ifndef RAYTRACING_VEC3_H
#define RAYTRACING_VEC3_H

#include <cmath>
#include <iostream>

class vec3 {
public:
    double e[3];

    vec3() : e{0,0,0} {};
    vec3(const double e0, const double e1, const double e2) : e{e0,e1,e2} {}

    double x() const { return e[0]; };
    double y() const { return e[1]; };
    double z() const { return e[2]; };

    vec3 operator-() const { return vec3(-e[0], -e[1], -e[2]); }
};


#endif //RAYTRACING_VEC3_H
