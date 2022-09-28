#include <windows.h>
#include <GL/glut.h>

void userdraw(){
    static int tick=0;

//     BUAT POLA TITIK DENGAN WARNA BERBEDA
    glColor3f(1.0,0.0,0.0);     //warna merah
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(9,16);
    glEnd();

    glColor3f(0.0,1.0,0.0);     //warna hijau
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(11,16);
    glEnd();

    glColor3f(1.0,1.0,0.0);     //warna kuning
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(13,16);
    glEnd();

    glColor3f(1.0,0.0,1.0);     // warna ungu
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(9,14);
    glEnd();

    glColor3f(0.0,0.0,1.0);     // warna biru
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(11,14);
    glEnd();

    glColor3f(1.0,1.0,1.0);     // warna putih
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2i(13,14);
    glEnd();
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    userdraw();
    glutSwapBuffers();
}
int main(int argc, char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("E1E120028_Farid rahman laode");
    glClearColor(0,0,0,0);
    gluOrtho2D(0.,24.,0.,24.);
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
return 0;
}
