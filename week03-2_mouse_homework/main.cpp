#include <GL/glut.h>
#include <stdio.h>
float X=0, Y=0; ///利用GLOBAL變數, 在函式之間傳值 (大寫)
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT ); ///清背景

    glBegin(GL_POLYGON);

    glVertex2f(-0.412, 0.556);
    glVertex2f(-0.372, 0.552);
    glVertex2f(-0.268, 0.484);
    glVertex2f(-0.228, 0.408);
    glVertex2f(-0.180, 0.428);
    glVertex2f(-0.152, 0.492);
    glVertex2f(-0.100, 0.492);
    glVertex2f(-0.140, 0.456);
    glVertex2f(-0.168, 0.376);
    glVertex2f(-0.216, 0.328);
    glVertex2f(-0.272, 0.272);
    glVertex2f(-0.524, 0.280);
    glVertex2f(-0.572, 0.320);
    glVertex2f(-0.664, 0.400);
    glVertex2f(-0.664, 0.448);
    glVertex2f(-0.568, 0.472);
    glVertex2f(-0.536, 0.484);
    glVertex2f(-0.424, 0.512);

    glBegin(GL_LINES)

    glEnd();
    glutSwapBuffers();
}
void mouse(int button, int state, int x, int y)
                                    ///小寫
{
    float X = (x-250)/250.0;
    float Y = -(y-250)/250.0;
    ///口訣 : 減一半, 除一半, y變負號
    if(state == GLUT_DOWN)
    {
        printf("    glVertex2f(%.3f%, %.3f);\n", X, Y);
    }
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(500, 500); ///視窗增大
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutMouseFunc(mouse); ///請mouse函式幫忙

    glutMainLoop();
}
