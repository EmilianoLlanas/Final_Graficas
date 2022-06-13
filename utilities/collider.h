#ifndef COLLIDER_H_INCLUDED
#define COLLIDER_H_INCLUDED

#include <GL/glut.h>
#include <math.h>

#define MAXLENGHT 32

using namespace std;

struct Object {
    float centerX;
    float centerY;
    float centerZ;
    float cubeSize;
};

class Collider{
private:
    Object objects [MAXLENGHT];
    int index;

public:
    Collider();

    void addObject(float centerX, float centerY, float centerZ, float cubeSize);
    void drawColliders();
    bool hasCollition(float centerX, float centerY, float centerZ, float cubeSize);

};

#endif // COLLIDER_H_INCLUDED
