#include "lights.h"

Lights::Lights()
{
    type = 0;
}

Lights::~Lights()
{
    //dtor
}

void Lights::setType()
{
    GLfloat sun_light_direction[3] = {0.0, 1.0, 0.0};
    switch(type){
    case 0:
        //Dispersion de la luz a 180? (default)
        setVector(sun_light_position, 0.0, 15.0, 0.0, 1.0);
        setVector(sun_light_ambient, 0.0, 0.0, 0.0, 1.0);
        setVector(sun_light_diffuse, 1.0, 1.0, 1.0, 1.0);
        setVector(sun_light_specular, 1.0, 1.0, 1.0, 1.0);
        glLightfv(GL_LIGHT0, GL_POSITION, sun_light_position);
        glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, sun_light_direction);
        glLightf(GL_LIGHT0, GL_SPOT_CUTOFF, 180.0f);
        glLightf(GL_LIGHT0, GL_SPOT_EXPONENT, 0.0f);
        glLightfv(GL_LIGHT0, GL_AMBIENT, sun_light_ambient);
        glLightfv(GL_LIGHT0, GL_DIFFUSE, sun_light_diffuse);
        glLightfv(GL_LIGHT0, GL_SPECULAR, sun_light_specular);
        setVector(mat_ambient, 0.0, 0.0, 0.0, 1.0);
        setVector(mat_diffuse, 1.0, 1.0, 1.0, 1.0);
        setVector(mat_specular, 1.0, 1.0, 1.0, 1.0);
        setVector(mat_emission, 0.0, 0.0, 0.0, 1.0);
        mat_shininess[0] = 10.0;
        glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
        glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
        glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
        glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
        glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
        break;
    }
}

void Lights::setVector(GLfloat v[4], GLfloat v1, GLfloat v2, GLfloat v3, GLfloat v4)
{
    v[0] = v1;
    v[1] = v2;
    v[2] = v3;
    v[3] = v4;
}

void Lights::Spot()
{
    type = 0;
    setType();
}



void Lights::LightModel()
{
    type = 6;
    setType();
}



