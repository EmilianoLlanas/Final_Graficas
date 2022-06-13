#ifndef LIGHTS_H
#define LIGHTS_H

#include <iostream>
#include <GL/glut.h>

using namespace std;

class Lights
{
    public:
        Lights();
        virtual ~Lights();
        void LightModel();
        void Spot();
        void Directional();


    protected:

    private:
        int type;
       //light variables
        GLfloat sun_light_position[4];
        //GLfloat sun_light_direction[3];
        //color light
        GLfloat sun_light_ambient[4];
        GLfloat sun_light_diffuse[4];
        GLfloat sun_light_specular[4];
        GLfloat light_model_ambient[4];

        GLfloat mat_ambient[4];
        GLfloat mat_diffuse[4];
        GLfloat mat_specular[4];
        GLfloat mat_emission[4];
        GLfloat mat_shininess[1];

        void setVector(GLfloat v[4], GLfloat, GLfloat, GLfloat, GLfloat);
        void setType();
};

#endif // LIGHTS_H
