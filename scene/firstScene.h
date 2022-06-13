#ifndef FIRSTSCENE_H_INCLUDED
#define FIRSTSCENE_H_INCLUDED

#include <GL/glut.h>
#include "../object/cube.h"
#include "../object/ball.h"
#include "../object/character.h"

class FirstScene {
private:
    float X_MIN=-50;
    float X_MAX=50;
    float Y_MIN=-50;
    float Y_MAX=50;
    float Z_MIN=-50;
    float Z_MAX=50;

    Cube cube;
    Character character;
    Ball ball;

    void drawAxis();

public:
    void drawScene();
    void updateScene();
    void initScene();
    void updateView(int key, int x, int y);

    FirstScene();
};

#endif // FIRSTSCENE_H_INCLUDED
