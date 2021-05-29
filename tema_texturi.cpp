//#include <GL/glut.h>
//#include <stdlib.h>
//#include <math.h>
//#include "SOIL.h"
//
//static int leftFirst = GL_TRUE;
//
//void LoadTexture(void)
//{
//    GLuint texture;
//    glGenTextures(1, &texture);
//    glBindTexture(GL_TEXTURE_2D, texture);
//
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);	// Set texture wrapping to GL_REPEAT
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
//    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
//    int width, height;
//    unsigned char* image = SOIL_load_image("doge.png", &width, &height, 0, SOIL_LOAD_RGB);
//    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
//    // SOIL_free_image_data(image);
//    // glBindTexture(GL_TEXTURE_2D, 0);
//
//}
//
//static void init(void)
//{
//    glEnable(GL_BLEND);
//    glBlendFunc(GL_SRC_ALPHA, GL_SRC_ALPHA);
//    glShadeModel(GL_FLAT);
//    glClearColor(0.0, 0.0, 0.0, 1.0);
//}
//
//static void drawFig1(void)
//{
//
//    glBegin(GL_QUADS);
//    glColor4f(1.0, 0.0, 0.0, 0.75);
//    glVertex3f(0.1, 0.9, 0.0);
//    glVertex3f(0.1, 0.1, 0.0);
//    glVertex3f(0.7, 0.1, 0.0);
//    glVertex3f(0.7, 0.5, 0.0);
//    glEnd();
//}
//
//static void drawFig2(void)
//{
//
//    glBegin(GL_QUADS);
//    glColor4f(0.0, 0.0, 1.0, 0.75);
//    glVertex3f(0.9, 0.9, 0.0);
//    glVertex3f(0.3, 0.9, 0.0);
//    glVertex3f(0.3, 0.5, 0.0);
//    glVertex3f(0.9, 0.1, 0.0);
//    glEnd();
//}
//
//static void drawDoge(void)
//{
//    //glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(1.0, 1.0, 1.0);
//
//    glEnable(GL_TEXTURE_2D);
//    LoadTexture();
//
//    glBegin(GL_QUADS);
//    glTexCoord2f(1.0, 1.0); glVertex3f(-1.0, -1.0, 0.0);
//    glTexCoord2f(1.0, 0.0); glVertex3f(-1.0, -0.5, 0.0);
//    glTexCoord2f(0.0, 0.0); glVertex3f(-0.5, -0.5, 0.0);
//    glTexCoord2f(0.0, 1.0); glVertex3f(-0.5, -1.0, 0.0);
//    glEnd();
//
//}
//
//void display(void)
//{
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    if (leftFirst) {
//        drawFig1();
//        drawFig2();
//        drawDoge();
//    }
//    else {
//        drawFig2();
//        drawFig1();
//        drawDoge();
//    }
//
//    glFlush();
//}
//
//void reshape(int w, int h)
//{
//    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    if (w <= h)
//        gluOrtho2D(0.0, 1.0, 0.0, 1.0 * (GLfloat)h / (GLfloat)w);
//    else
//        gluOrtho2D(0.0, 1.0 * (GLfloat)w / (GLfloat)h, 0.0, 1.0);
//}
//
//void keyboard(unsigned char key, int x, int y)
//{
//    switch (key) {
//    case 't':
//    case 'T':
//        leftFirst = !leftFirst;
//        glutPostRedisplay();
//        break;
//    case 27:  /*  Escape key  */
//        exit(0);
//        break;
//    default:
//        break;
//    }
//}
//
///*  Main Loop
// *  Open window with initial window size, title bar,
// *  RGBA display mode, and handle input events.
// */
//int main(int argc, char** argv)
//{
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize(500, 500);
//    glutCreateWindow(argv[0]);
//    init();
//    //glutReshapeFunc(reshape);
//    //glutKeyboardFunc(keyboard);
//    glutDisplayFunc(display);
//    glutMainLoop();
//    return 0;
//}
