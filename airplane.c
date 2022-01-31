#include <stdio.h>
#include <GL/glut.h>
#include <stdio.h>

typedef struct Vertex
{
    float x, y, z; //posição do vertice
    // float r, g, b; //cor do vertice
}Vertex;


void start()
{
    glClearColor(0, 0, 0, 0);
}

    Vertex vertices[] = {
        {0.8f, 0.8f, 0.8f},
        { 0.8f,  0.8f, 0.8f},
        {0.8f, 0.8f, 0.8f},
    };

void display()
{
    int i;
    Vertex v;

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
    
    for(i = 0; i < sizeof(vertices); i++)
    {
        v = vertices[i];
        glVertex3f(v.x, v.y, v.z);
    }

    glEnd();
    glutSwapBuffers();

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 400);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Voando por Maceio");

    start();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;

}