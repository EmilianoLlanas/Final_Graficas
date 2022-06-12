#include "cube.h"

Cube::Cube()
{

}

void Cube::draw() {
    glColor3f(1.0,0.0,1.0);
    glutSolidCube(1);
}
