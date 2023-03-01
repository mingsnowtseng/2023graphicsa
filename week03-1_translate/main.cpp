#include <GL/glut.h>
float X=0, Y=0; ///利用GLOBAL變數, 在函式之間傳值 (大寫)
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT ); ///清背景
    glPushMatrix();
        glTranslatef( X, Y, 0); ///只有這個還不夠
        glutSolidTeapot( 0.3 ); ///茶壺
    glPopMatrix(); ///還原矩陣

    glutSwapBuffers();
}

void mouse(int button, int state, int x, int y)
                                    ///小寫
{
    X = (x-150)/150.0;
    Y = -(y-150)/150.0;
    ///口訣 : 減一半, 除一半, y變負號
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutMouseFunc(mouse); ///請mouse函式幫忙
    glutMainLoop();
}
