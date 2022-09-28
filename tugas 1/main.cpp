#include <windows.h>
#include <GL/glut.h>

void userdraw(){
    static int tick=0;

//     BUAT GARIS BERWARNA MERAH
    glColor3f(1.,0.,0.);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2f(11,18);
    glVertex2f(11,8);
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
