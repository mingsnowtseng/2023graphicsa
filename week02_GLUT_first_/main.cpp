///week02_GLUT_first
#include <GL/glut.h>
void display()
{
    ///glColor3f(0,1,0); ///step01-2 ���
    ///glutSolidTeapot( 0.5 ); ///step01-2 �e�X�@�ӹ�ߪ��j����, �����j�p 0.5
    glBegin(GL_POLYGON); ///step02-1 �}�l�e�h���
        glColor3f(1,0,0);  glVertex2f( 0, 1); ///���⪺���I Vertex step02-2
        glColor3f(0,1,0);  glVertex2f(-1,-1); ///��⪺���I Vertex step02-2
        glColor3f(0,0,1);  glVertex2f(+1,-1); ///�Ŧ⪺���I Vertex step02-2
    glEnd(); ///step02-1 �����e

    glColor3f(1,1,0); ///step01-2 ����
    glutSolidTeapot( 0.3 ); ///step01-1 �e�X�@�ӹ�ߪ��p����, �����j�p 0.3
    glutSwapBuffers(); ///step01-1 ��GLUT��e��swap�e����ܪ��a��
}
int main(int argc, char *argv[])
{ ///step01-1 �W���O�S�O�� main()�禡, ���ܦh�Ѽ�
    glutInit(&argc, argv); ///step01-1 �� GLUT �}�_��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///�W���o��,����ܪ��Ҧ��]�w�n!
	glutCreateWindow("GLUT Shapes"); ///step01-1 �n�}����
	glutDisplayFunc(display); ///step01-1 �n��ܪ������禡
	glutMainLoop(); ///step01-1 �̫�Ρu�D�n���j��v,�d�b�̫᭱
}
