#ifndef CUBE_H_INCLUDED
#define CUBE_H_INCLUDED

#include <GL/glut.h>

class Cube {
private:
    float movimiento=0.0;
    float velocidad=0.3;
public:
    void draw(float r, float g, float b);
    void update();
    Cube();
};

#endif // CUBE_H_INCLUDED
