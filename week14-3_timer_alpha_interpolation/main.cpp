#include <GL/glut.h>
float angle=0, newAngle=0, oldAngle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle, 0, 0, 1);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void timer(int t)
{
    if(t<100) glutTimerFunc(500, timer, t+1);
    float alpha = t/100.0; ///alpha介於0.00~1.00之間
    angle = newAngle*alpha + (1-alpha) * oldAngle; ///alpha內插公式
    glutPostRedisplay();
}
void motion(int x, int y)
{
    angle=x;
    glutPostRedisplay();
}
void mouse(int button, int state, int x, int y)
{
    if(state==GLUT_DOWN) oldAngle=x;
    if(state==GLUT_UP)   newAngle=x;
    glutPostRedisplay();
}
void keyboard(unsigned char key, int x, int y)
{ ///按任意健會播放動畫
    glutTimerFunc(0, timer, 0);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week14");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutKeyboardFunc(keyboard);
    glutMotionFunc(motion);

    glutMainLoop();
}
