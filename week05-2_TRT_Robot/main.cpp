///�ƻs�W�g���{���X (week04-1 Rotate)
///week05-2_TRT_Robot�O�Ӧ�week05-1_TRT_rotate_translate
///�e�X�j������B�e�X���u�C
#include <GL/glut.h>
float angle = 0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///�M�I��

    glColor3f(0, 1, 0); ///��⪺����
    glPushMatrix();
        glutSolidCube(0.5);

        glPopMatrix();

        glPushMatrix();
            glTranslatef(0.25, 0.25, 0); ///���ӪF�豾�b�k�W���C
            glRotatef(angle, 0, 0, 1); ///���
            glTranslatef(0.25, 0.25, 0); ///����त�ߡA��줤���C
                ///glTranslatef(0.5, 0.5, 0); �����ѱ��C
            glColor3f(1, 0, 0); ///���⪺���u
            glutSolidCube(0.5);
        glPopMatrix();

    glutSwapBuffers();
    angle++; ///�⨤��++
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
