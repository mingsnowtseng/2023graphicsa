#include <GL/glut.h>
void display()
{
    glColor3f(247/255.0, 247/255.0, 247/255.0); ///��m���� : �Ϥ����Ӫ���m/255.0
                                                ///��m�i�Τp�e�a���w�ެݨ�R,G,B�C
    glBegin(GL_POLYGON); ///�}�l�e�h���
        glVertex2f( 0,  1);  ///�]�w���IVertex
        glVertex2f(-1, -1);  ///�]�w���IVertex
        glVertex2f( 1, -1);  ///�]�w���IVertex
        glVertex2f( 1,  1);

        glEnd(); ///�����e�h���

        glColor3f(244/255.0, 209/255.0, 33/255.0);
        glBegin(GL_POLYGON);
        glVertex2f( (45-100)/100.0, -(134-100)/100.0 );
        glVertex2f( (36-100)/100.0, -(171-100)/100.0 );
        glVertex2f( (108-100)/100.0, -(179-100)/100.0 );
        glVertex2f( (104-100)/100.0, -(117-100)/100.0 );
        ///�f�Z : ��@�b�A���@�b�Ay�ܭt���C
        glEnd();

    glutSwapBuffers(); ///��GLUT��e��swap�e����ܪ��a��
}

int main(int argc, char *argv[])  ///main�禡���t�Ӽg�k
{
	glutInit(&argc, argv);  ///��GLUT�}�_��
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///����ܪ��ҫ�
	glutCreateWindow("GLUT Shapes"); ///�n�}����
	glutDisplayFunc(display); ///�n��ܹ����禡
	glutMainLoop(); ///�̫��main�j��A���b�̫᭱
}

