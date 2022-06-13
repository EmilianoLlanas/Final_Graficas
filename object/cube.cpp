#include "cube.h"

Cube::Cube()
{

}

void Cube::draw() {
    glColor3f(0.0,0.0,1.0);
    glTranslatef(0.0,0.0,movimiento);
    glutSolidCube(1);
}

void Cube::update() {

     if(movimiento>10){
        velocidad=-0.3;
     }

     if(movimiento<-10){
        velocidad=0.3;
     }
     movimiento+=velocidad;
    //rotacion += 1;
}

