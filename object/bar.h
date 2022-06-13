#ifndef BAR_H_INCLUDED
#define BAR_H_INCLUDED

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include "../utilities/RgbImage.h"
#define NTextures 1


class Bar {

public:
    GLuint	texture[NTextures];
    char* filename1 ="textura1.bmp";
    void draw();
    Bar();
    void loadTextureFromFile(char *filename, int index);
    void drawFace(float x1, float y1, float z1,
              float x2, float y2, float z2,
              float x3, float y3, float z3,
              float x4, float y4, float z4);

};

#endif // BAR_H_INCLUDED
