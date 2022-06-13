#include "firstScene.h"
#include<iostream>
using namespace std;
FirstScene::FirstScene(){

}

void FirstScene::drawAxis(){
     //X axis in red
     glBegin(GL_LINES);
       glColor3f(1.0f,0.0f,0.0f);
       glVertex3f(X_MIN,0.0,0.0);
       glColor3f(1.0f,0.0f,0.0f);
       glVertex3f(X_MAX,0.0,0.0);
     glEnd();
     //Y axis in green
     glBegin(GL_LINES);
       glColor3f(0.0f,1.0f,0.0f);
       glVertex3f(0.0,Y_MIN,0.0);
       glColor3f(0.0f,1.0f,0.0f);
       glVertex3f(0.0,Y_MAX,0.0);
     glEnd();
     //Z axis in blue
     glBegin(GL_LINES);
       glColor3f(0.0f,0.0f,1.0f);
       glVertex3f(0.0,0.0,Z_MIN);
       glColor3f(0.0f,0.0f,1.0f);
       glVertex3f(0.0,0.0,Z_MAX);
     glEnd();
}

void FirstScene::drawScene(){
    drawAxis();
<<<<<<< Updated upstream

    glPushMatrix();
    glTranslated(10,0,0);
=======
    //collider->drawColliders();
    glPushMatrix();
    glTranslatef(0.0,3.0,0.0);
    ball.draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,3.0,0.0);
>>>>>>> Stashed changes
    cube.draw();
    glPopMatrix();
}

void FirstScene::updateScene() {
    ball.update();
    cube.update();
}

void FirstScene::initScene() {
    character.initView();
}

void FirstScene::updateView(int key, int x, int y) {
    character.SpecialInput(key, x, y);
}
