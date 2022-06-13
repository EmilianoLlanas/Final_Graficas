#ifndef FIRSTSCENE_H_INCLUDED
#define FIRSTSCENE_H_INCLUDED

#include <GL/glut.h>
#include "../utilities/collider.h"

#include "../object/cube.h"
#include "../object/ball.h"
#include "../object/character.h"

#include "../object/lights.h"

class FirstScene {
private:

    Lights light;

    float FOVY=60.0;
    float ZNEAR=0.01;
    float ZFAR=100.0;

    float EYE_X=0.0;
    float EYE_Y=0.0;
    float EYE_Z=15.0;
    float CENTER_X=0;
    float CENTER_Y=0;
    float CENTER_Z=0;
    float UP_X=0;
    float UP_Y=1;
    float UP_Z=0;

    float X_MIN=-50;
    float X_MAX=50;
    float Y_MIN=-50;
    float Y_MAX=50;
    float Z_MIN=-50;
    float Z_MAX=50;

    Collider *collider;

    Cube cube;

    Cube cube2;
    Character character;
    Ball ball;

    void drawAxis();
    void loadColliders();

    void drawMesh(char, int, int, int, int);

public:
    void drawScene();
    void updateScene();
    void initScene();
    void updateView(int key, int x, int y);

    void Lighting();
    void drawMesh();

    FirstScene();
};

#endif // FIRSTSCENE_H_INCLUDED
