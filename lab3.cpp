///*
//Problema 1
//*/
//#include <windows.h>
//#include <math.h>
//#include <stdlib.h>
//#include <GL/freeglut.h>
//#include <string.h>
//#include <string>
//
//using namespace std;
//
//const double TWO_PI = 6.2831853;
//
//GLsizei winWidth = 500, winHeight = 500;
//GLuint regHex;
//static GLfloat rotTheta = 0.0;
//
//class scrPt
//{
//public:
//	GLint x, y;
//};
//
//static void init(void)
//{
//	scrPt hexVertex, hexVertex1;
//	GLdouble hexTheta, pctX, pctY;
//	GLint k;
//
//	glClearColor(1.0, 1.0, 1.0, 0.0);
//	regHex = glGenLists(1);
//	glNewList(regHex, GL_COMPILE);
//
//	glColor3f(1.0, 0.0, 0.0);
//	glBegin(GL_POLYGON);
//	pctX = 0;
//	pctY = 0;
//	for (k = 0; k < 31; k++)
//	{
//		hexTheta = TWO_PI * k / 31;
//		hexVertex.x = 150 + 100 * cos(hexTheta);
//		hexVertex.y = 150 + 100 * sin(hexTheta);
//		glVertex2i(hexVertex.x, hexVertex.y);
//		pctX += hexVertex.x;
//		pctY += hexVertex.y;
//	}
//	pctX /= 31;
//	pctY /= 31;
//	glEnd();
//
//	glEnable(GL_POINT_SMOOTH);
//	glPointSize(5);
//	glBegin(GL_POINTS);
//	glColor3f(0.0, 1.0, 0.0);
//	glVertex2i(pctX, pctY);
//	glEnd();
//	glDisable(GL_POINT_SMOOTH);
//
//	glRasterPos2i(pctX, pctY);
//	glColor4f(0.0f, 0.0f, 0.0f, 1.0f);
//	string text = to_string(pctX) + ", " + to_string(pctY);
//	//const unsigned char* t = reinterpret_cast<const unsigned char*>(text);
//	glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)text.c_str());
//
//	glColor3f(1.0, 0.0, 0.0);
//	glBegin(GL_POLYGON);
//	pctX = 0;
//	pctY = 0;
//	for (k = 0; k < 20; k++)
//	{
//		hexTheta = TWO_PI * k / 20;
//		hexVertex.x = 50 + 50 * cos(hexTheta);
//		hexVertex.y = 10 + 50 * sin(hexTheta);
//		glVertex2i(hexVertex.x, hexVertex.y);
//		pctX += hexVertex.x;
//		pctY += hexVertex.y;
//	}
//	pctX /= 20;
//	pctY /= 20;
//	glEnd();
//
//	glEnable(GL_POINT_SMOOTH);
//	glPointSize(5);
//	glBegin(GL_POINTS);
//	glColor3f(0.0, 1.0, 0.0);
//	glVertex2i(pctX, pctY);
//	glEnd();
//	glDisable(GL_POINT_SMOOTH);
//
//	glRasterPos2i(pctX, pctY);
//	glColor4f(0.0f, 0.0f, 0.0f, 1.0f);
//	text = to_string(pctX) + ", " + to_string(pctY);
//	//const unsigned char* t = reinterpret_cast<const unsigned char*>(text);
//	glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)text.c_str());
//
//	glColor3f(1.0, 0.0, 0.0);
//	glBegin(GL_POLYGON);
//	pctX = 0;
//	pctY = 0;
//	for (k = 0; k < 60; k++)
//	{
//		hexTheta = TWO_PI * k / 60;
//		hexVertex.x = -100 + 10 * cos(hexTheta);
//		hexVertex.y = -50 + 10 * sin(hexTheta);
//		glVertex2i(hexVertex.x, hexVertex.y);
//		pctX += hexVertex.x;
//		pctY += hexVertex.y;
//	}
//	pctX /= 60;
//	pctY /= 60;
//	glEnd();
//
//	glEnable(GL_POINT_SMOOTH);
//	glPointSize(5);
//	glBegin(GL_POINTS);
//	glColor3f(0.0, 1.0, 0.0);
//	glVertex2i(pctX, pctY);
//	glEnd();
//	glDisable(GL_POINT_SMOOTH);
//
//	glRasterPos2i(pctX, pctY);
//	glColor4f(0.0f, 0.0f, 0.0f, 1.0f);
//	text = to_string(pctX) + ", " + to_string(pctY);
//	//const unsigned char* t = reinterpret_cast<const unsigned char*>(text);
//	glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_10, (const unsigned char*)text.c_str());
//
//
//	glEndList();
//
//}
//void displayHex(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//
//
//	glCallList(regHex);
//	glPopMatrix();
//
//
//	glFlush();
//}
//
//
//
//void winReshapeFcn(GLint newWidth, GLint newHeight)
//{
//	glViewport(0, 0, (GLsizei)newWidth, (GLsizei)newHeight);
//
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluOrtho2D(-320.0, 320.0, -320.0, 320.0);
//
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//
//	glClear(GL_COLOR_BUFFER_BIT);
//}
//
//
//void main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowPosition(150, 150);
//	glutInitWindowSize(winWidth, winHeight);
//	glutCreateWindow("Hexagon problema 1");
//
//	init();
//	glutDisplayFunc(displayHex);
//	glutReshapeFunc(winReshapeFcn);
//
//	glutMainLoop();
//}
//
