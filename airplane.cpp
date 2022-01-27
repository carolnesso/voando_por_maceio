#include <stdio.h>
#include <GL/glut.h>

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(500, 400);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Voando por Maceió");

    
    glutDialsFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;

    
}