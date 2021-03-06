#include "character.h"

Character::Character() {
}


float Character::RadToDeg(float r)
{
      return ((180.0*r)/PI);
}

float Character::DegToRad(float g)
{
      return ((g*PI)/180.0);
}

void Character::initView(){
    gluLookAt(EYE_X,EYE_Y,EYE_Z,CENTER_X,CENTER_Y,CENTER_Z,UP_X,UP_Y,UP_Z);

}

void Character::LookAt() {
    float x, z;
    x = Direction[0]*cos(DegToRad(Theta)) + Direction[2]*sin(DegToRad(Theta));
    z = -Direction[0]*sin(DegToRad(Theta)) + Direction[2]*cos(DegToRad(Theta));
    Direction[0] = x;
    Direction[2] = z;
    CENTER_X = EYE_X + Direction[0];
    CENTER_Z = EYE_Z + Direction[2];
}

void Character::SpecialInput(int key, int x, int y) {
    switch(key){
        case GLUT_KEY_UP:
            if (!collider->hasCollition(EYE_X + Direction[0],
                                        EYE_Y + Direction[1],
                                        EYE_Z + Direction[2],
                                        .3))
               {
                 EYE_X += Direction[0];
                 EYE_Y += Direction[1];
                 EYE_Z += Direction[2];
                 CENTER_X = EYE_X + Direction[0];
                 CENTER_Y = EYE_Y + Direction[1];
                 CENTER_Z = EYE_Z + Direction[2];
               }

            glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
             break;
        case GLUT_KEY_DOWN:
            if(!collider->hasCollition(EYE_X - Direction[0],
                                       EYE_Y - Direction[1],
                                       EYE_Z - Direction[2],
                                       .3))
               {
                 EYE_X -= Direction[0];
                 EYE_Y -= Direction[1];
                 EYE_Z -= Direction[2];
                 CENTER_X = EYE_X + Direction[0];
                 CENTER_Y = EYE_Y + Direction[1];
                 CENTER_Z = EYE_Z + Direction[2];
               }
               glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);

             break;
        case GLUT_KEY_LEFT:
             Theta = 1.0f;
             LookAt();
             break;
        case GLUT_KEY_RIGHT:
             Theta = -1.0f;
             LookAt();
             break;
    }

    glLoadIdentity();
    gluLookAt(EYE_X,EYE_Y,EYE_Z,CENTER_X,CENTER_Y,CENTER_Z,UP_X,UP_Y,UP_Z);
    glutPostRedisplay();
}

Character::Character(Collider *coll) {
    collider = coll;
}
