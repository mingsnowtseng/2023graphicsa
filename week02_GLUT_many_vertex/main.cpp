#include <GL/glut.h>
void display()
{
    glColor3f(247/255.0, 247/255.0, 247/255.0); ///色彩換算 : 圖片本來的色彩/255.0
                                                ///色彩可用小畫家的滴管看見R,G,B。
    glBegin(GL_POLYGON); ///開始畫多邊形
        glVertex2f( 0,  1);  ///設定頂點Vertex
        glVertex2f(-1, -1);  ///設定頂點Vertex
        glVertex2f( 1, -1);  ///設定頂點Vertex
        glVertex2f( 1,  1);

        glEnd(); ///結束畫多邊形

        glColor3f(244/255.0, 209/255.0, 33/255.0);
        glBegin(GL_POLYGON);
        glVertex2f( (45-100)/100.0, -(134-100)/100.0 );
        glVertex2f( (36-100)/100.0, -(171-100)/100.0 );
        glVertex2f( (108-100)/100.0, -(179-100)/100.0 );
        glVertex2f( (104-100)/100.0, -(117-100)/100.0 );
        ///口訣 : 減一半，除一半，y變負號。
        glEnd();

    glutSwapBuffers(); ///請GLUT把畫面swap送到顯示的地方
}

int main(int argc, char *argv[])  ///main函式的另個寫法
{
	glutInit(&argc, argv);  ///把GLUT開起來
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///把顯示的模型
	glutCreateWindow("GLUT Shapes"); ///要開視窗
	glutDisplayFunc(display); ///要顯示對應函式
	glutMainLoop(); ///最後用main迴圈，壓在最後面
}

