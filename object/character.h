#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED

#include <GL/glut.h>
#include <math.h>
#include "../utilities/collider.h"

class Character{
private:
    float EYE_X=-15.0;
    float EYE_Y=0.0;
    float EYE_Z=0.0;
    float CENTER_X=10;
    float CENTER_Y=0;
    float CENTER_Z=0;
    float UP_X=0;
    float UP_Y=1;
    float UP_Z=0;

    float Theta=0;
    float PI = 3.14159265359;
    float Direction[3] = {1.0,0.0,0.0};

    float RadToDeg(float r);
    float DegToRad(float g);

    Collider *collider;

    void LookAt();
public:
    Character();
    Character(Collider *coll);

    void initView();
    void SpecialInput(int key, int x, int y);
};

#endif // CHARACTER_H_INCLUDED
