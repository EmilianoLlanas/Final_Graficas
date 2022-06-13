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

void FirstScene::Lighting()
{
    light.Spot();
}

void FirstScene::drawMesh(char axis, int min1, int max1, int min2, int max2)
{
    int i,j;
    switch(axis){
    case 'x':
        glNormal3f(0,1,0);
        for(i=min1; i<max1; i++)
            for(j=min2; j<max2; j++){
                    glBegin(GL_QUADS);
                    glVertex3i(i, -1,  j);
                    glVertex3i(i, -1,  j+1);
                    glVertex3i(i+1, -1,  j+1);
                    glVertex3i(i+1, -1,  j);
                    glEnd();
            }
        break;
    case 'y':
        break;
    case 'z':
        break;
    }
}


void FirstScene::drawMesh()
{
    drawMesh('x',-20,20,-20,20);
}

void FirstScene::drawScene() {
    drawAxis();

    glEnable(GL_LIGHTING);
    Lighting();
    glEnable(GL_LIGHT0);

    drawMesh();
    glPushMatrix();

    glTranslatef(0.0, -5.0, 5.0);
    cube.draw();

    glPopMatrix();

    glDisable(GL_LIGHT0);
    glDisable(GL_LIGHTING);
}

void FirstScene::initScene() {
    character.initView();
    loadColliders();
}

void FirstScene::updateView(int key, int x, int y) {
    character.SpecialInput(key, x, y);
}
