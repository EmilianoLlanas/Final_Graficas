#include "firstScene.h"

FirstScene::FirstScene(){
    collider = new Collider();

    character = Character(collider);
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

void FirstScene::loadColliders() {

    //Cube
    collider->addObject(0,0,0,.5);
}

void FirstScene::drawScene() {
    drawAxis();
    collider->drawColliders();

    glPushMatrix();
    cube.draw();

    glPopMatrix();
}

void FirstScene::initScene() {
    character.initView();
    loadColliders();
}

void FirstScene::updateView(int key, int x, int y) {
    character.SpecialInput(key, x, y);
}
