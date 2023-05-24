///Week02-2GLUT_many_vertex
#include <GL/glut.h>
void myVertex(float x, float y)
{
    glVertex2f( (x-100)/100.0, -(y-100)/100.0 );
}
void display()
{
    glColor3f(247/255.0, 247/255.0, 247/255.0);
    glBegin(GL_POLYGON);
        glVertex2f( 1, 1);
        glVertex2f(-1, 1);
        glVertex2f(-1,-1);
        glVertex2f( 1,-1);
    glEnd();

    glColor3f(244/255.0, 209/255.0, 33/255.0);
    glBegin(GL_POLYGON);
        myVertex(45,134); ///glVertex2f( (45-100)/100.0, -(134-100)/100.0 );
        myVertex(36,171); ///glVertex2f( (36-100)/100.0, -(171-100)/100.0 );
        myVertex(108,179); ///glVertex2f( (108-100)/100.0, -(179-100)/100.0 );
        myVertex(104,117); ///glVertex2f( (104-100)/100.0, -(117-100)/100.0 );
        ///�f�Z:��@�b�B���@�b�By�ܭt��
    glEnd();

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
