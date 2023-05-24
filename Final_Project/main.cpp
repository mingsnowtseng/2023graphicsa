///week12-5_TRT_keyboard_mouse �n�� keyboard mouse �Ӿޱ�
#include <stdio.h>
#include <GL/glut.h>
#include "glm.h"
GLMmodel * head = NULL;
GLMmodel * body = NULL;
GLMmodel * uparmR = NULL;
GLMmodel * lowarmR = NULL;
int show[4] = {1, 1, 1, 1}; ///�� show[i] �ӨM�w�n���n���
int ID = 3;///0:�Y 1:���� 2:�W���u 3:�U���u
FILE * fout = NULL; /// �@�}�l,�ɮרS���}, NULL
FILE * fin = NULL; ///�nŪ�ɥΪ�����, NULL
float teapotX=0, teapotY=0; ///���ʭ�
///float angle=0, angle2=0, angle3=0;///�\�ʧ@
float angle[20]={}; ///�ܦ��}�C
void keyboard(unsigned char key, int x, int y) {
    if(key=='0') ID = 0;
    if(key=='1') ID = 1;
    if(key=='2') ID = 2;
    if(key=='3') ID = 3;
    if(key=='s')
    {
        if(fout==NULL) fout=fopen("motion.txt", "w");
        for(int i=0; i<20; i++)
        {
            fprintf(fout, "%.2f ", angle[i]);
        }
        fprintf(fout, "\n");
    }
    else if(key=='r')
    {
        if(fin==NULL) fin=fopen("motion.txt", "r");
        for(int i=0; i<20; i++)
        {
            fscanf(fin, "%f", &angle[i]);
        }
    }
    glutPostRedisplay();
    ///if(key=='0') show[0] = !show[0];/// week13 step03-1
    ///if(key=='1') show[1] = !show[1];/// week13 step03-1
    ///if(key=='2') show[2] = !show[2];/// week13 step03-1
    ///if(key=='3') show[3] = !show[3];/// week13 step03-1
    glutPostRedisplay();
}
///keyboard������
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glScalef(0.2, 0.2, 0.2);
        if(body==NULL)
        {
            head = glmReadOBJ("model/head.obj");
            body = glmReadOBJ("model/body.obj");
            uparmR = glmReadOBJ("model/uparmR.obj");
            lowarmR = glmReadOBJ("model/lowarmR.obj");
            ///glmUnitize(body);
        }
        if(ID==0) glColor3f(1,0,0); ///�]����
        else glColor3f(1,1,1); ///�]�զ�
        if(show[0]) glmDraw(head, GLM_MATERIAL);

        if(ID==1) glColor3f(1,0,0); ///�]����
        else glColor3f(1,1,1); ///�]�զ�
        if(show[1]) glmDraw(body, GLM_MATERIAL);

        glPushMatrix();
            glTranslatef(-1.200000, +0.453333, 0);
            glRotatef(angle[2], 0, 0, 1);
            //glTranslatef(teapotX, teapotY, 0);
            glTranslatef(1.200000, -0.453333, 0);

            if(ID==2) glColor3f(1,0,0); ///�]����
            else glColor3f(1,1,1); ///�]�զ�
            if(show[2]) glmDraw(uparmR, GLM_MATERIAL);
            glPushMatrix();
                glTranslatef(-1.959999, +0.113333, 0);
                glRotatef(angle[3], 0, 0, 1);
                glTranslatef(1.959999, -0.113333, 0);

                if(ID==3) glColor3f(1,0,0); ///�]����
                else glColor3f(1,1,1); ///�]�զ�
                if(show[3]) glmDraw(lowarmR, GLM_MATERIAL);
            glPopMatrix();
        glPopMatrix();

    glPopMatrix();
    glColor3f(0, 1, 0);///�����Ѧ��I
    glutSolidTeapot( 0.02 );
    glutSwapBuffers();
}
int oldX = 0, oldY = 0;
void motion(int x, int y)
{
    teapotX += (x - oldX)/150.0;
    teapotY -= (y - oldY)/150.0;
    angle[ID] += (x-oldX);
    oldX = x;
    oldY = y;
    ///angle = x;
    printf("glTranslatef(%f, %f, 0);\n", teapotX, teapotY);
    glutPostRedisplay();
}
void mouse(int button, int state, int x, int y)
{
    if(state==GLUT_DOWN){
        oldX = x; ///teapotX = (x-150)/150.0;
        oldY = y; ///teapotY = (150-y)/150.0;
        ///angle = x;
        ///printf("glTranslatef(%f, %f, 0);\n", teapotX, teapotY);
        ///if(fout==NULL) fout = fopen("file4.txt", "w"); ///step02-2 �S�}��,�N�}
        ///fprintf(fout, "%f %f\n", teapotX, teapotY); ///step02-2 �n�A�s�y��
    }
    display();
}
///void keyboard(unsigned char key, int x, int y) ///keyboard�禡
///{
///    if(fin==NULL){ ///step02-2 �p�G�ɮ��٨S fopen(), �N�}��
///        fclose(fout); ///�e��mouse�|�}fout����, �ҥH�n����
///        fin = fopen("file4.txt", "r");�S�}��,�N�}
///    }
///    ///fscanf(fin, "%f %f", &teapotX, &teapotY); Ū��
///    display();���e�e��
///}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week15");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
}