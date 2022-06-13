#ifndef BALL_H_INCLUDED
#define BALL_H_INCLUDED

#include <GL/glut.h>

class Ball {
private:
    float movimiento=1.0;
    float velocidad=0.5;
    float movimientoh=0.0;
    float velocidadh=0.3;
public:
    void draw();
    void update();
    Ball();
};

#endif // BALL_H_INCLUDED
