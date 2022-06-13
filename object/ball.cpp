#include "ball.h"
#include <iostream>
using namespace std;
Ball::Ball()
{

}

void Ball::draw() {
    glColor3f(0.0,1.0,0.0);
    glTranslatef(0.0,movimiento,movimientoh);
    glutSolidSphere(1,50,50);
}

void Ball::update() {

     if(movimiento>10){
        velocidad=-0.5;
     }

     if(movimiento<2){
        velocidad=0.5;
     }

     if(movimientoh>10){
        velocidadh=-0.3;
     }

     if(movimientoh<-10){
        velocidadh=0.3;
     }
     movimiento+=velocidad;
     movimientoh+=velocidadh;
    //rotacion += 1;
}
