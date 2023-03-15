///複製上週的程式碼 (week04-1 Rotate)
///week05-2_TRT_Robot是來自week05-1_TRT_rotate_translate
///畫出大的身體、畫出手臂。
#include <GL/glut.h>
float angle = 0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///清背景

    glColor3f(0, 1, 0); ///綠色的身體
    glPushMatrix();
        glutSolidCube(0.5);

        glPopMatrix();

        glPushMatrix();
            glTranslatef(0.25, 0.25, 0); ///把整個東西掛在右上角。
            glRotatef(angle, 0, 0, 1); ///轉動
            glTranslatef(0.25, 0.25, 0); ///把旋轉中心，放到中間。
                ///glTranslatef(0.5, 0.5, 0); 先註解掉。
            glColor3f(1, 0, 0); ///紅色的手臂
            glutSolidCube(0.5);
        glPopMatrix();

    glutSwapBuffers();
    angle++; ///把角度++
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week05");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
