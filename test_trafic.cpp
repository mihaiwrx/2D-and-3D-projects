#include<windows.h>
#include <gl/freeglut.h>
#include <iostream>
#include <stdlib.h>     
#include <time.h>    
#include <string.h>
#include <string>


using namespace std;

int gameWidth = 1200;
int gameHeight = 600;
float moveCar = 1400;
int v1 = rand() % 5;
int currentColor, rotation;
int j = 0;
int viata = 3;
float speed = 5;
int scor = 0;

float xr = 25, yr = 25;
void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(0, 1200.0, 0.0, 600.0, -1.0, 1.0);

}

void drawLine() {
	for (int i = 1; i <= 11; i = i + 2) {
		for (int j = 1; j <= 4; j++) {
			if (j % 2 == 1) {
				glBegin(GL_QUADS);
				glColor3d(1, 0.5, 0);
				glVertex2f(i * 100 - 50, j * 100);
				glVertex2f(i * 100 - 50, (j * 100) + 20);
				glVertex2f((i * 100) + 50, (j * 100) + 20);
				glVertex2f((i * 100) + 50, j * 100);
				glEnd();
			}
			else {
				glBegin(GL_QUADS);
				glColor3d(1, 0.5, 0);
				glVertex2f((i * 100), j * 100);
				glVertex2f((i * 100), (j * 100) + 20);
				glVertex2f((i * 100) + 100, (j * 100) + 20);
				glVertex2f((i * 100) + 100, j * 100);
				glEnd();
			}

		}
	}
}

void callback_Color(int key)
{
	currentColor = key;
}

void callback_Rotation(int key)
{
	rotation = key;
	if (key == 1) {
		j = j + 90;
	}
	if (key == 2) {
		j = j + 45;
	}
	if (key == 0) {
		j = 0;
	}
}

void callback_Speed(int key)
{
	if (key == 0) {
		speed = 5;
	}
	if (key == 1) {
		speed = 8;
	}
	if (key == 2) {
		speed = 12;
	}
}

void callback_Main(int key)
{
	if (key == 0)
	{
		exit(0);
	}
}


void deseneazaMasini() {
	glPushMatrix();
	if (moveCar > -200)
		moveCar = moveCar - speed;
	else {
		v1 = rand() % 5;
		moveCar = 1300;
		scor += 10;
	}
	if (rotation != 0) {

		glPushMatrix();

		glTranslated(moveCar, (100 * v1) + 50, 0);
		glRotated(j, 0, 0, 1); // aplicam rotatia
		glTranslated(-(25 + 25 + 150 + 150) / 4, -(25 + 75 + 75 + 25) / 4, 0);
		glBegin(GL_QUADS);
		glColor3d(1, 1, 1);
		glVertex2f(25, 25);
		glVertex2f(25, 75);
		glVertex2f(150, 75);
		glVertex2f(150, 25);
		glEnd();
		glPopMatrix();
		glutPostRedisplay();



	}
	else {
		glTranslated(moveCar, (100 * v1), 0);
		glBegin(GL_QUADS);
		glColor3d(1, 1, 1);
		glVertex2f(25, 25);
		glVertex2f(25, 75);
		glVertex2f(150, 75);
		glVertex2f(150, 25);
		glEnd();
		glPopMatrix();
		glutPostRedisplay();

	}

	if ((yr - 25) == (100 * v1) / 1.0) {
		if (abs(moveCar - xr) < 100) {
			xr = 25;
			yr = 25;
			moveCar = 1400;
			viata--;
		}
	}

}

void deseneazaScena(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_QUADS);
	glColor3d(0.6, 0.6, 0.6);
	glVertex2f(0, 0);
	glVertex2f(0, 500);
	glVertex2f(1200, 500);
	glVertex2f(1200, 0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3d(0, 0, 0.8);
	glVertex2f(0, 500);
	glVertex2f(0, 600);
	glVertex2f(1200, 600);
	glVertex2f(1200, 500);
	glEnd();

	drawLine();

	deseneazaMasini();

	glBegin(GL_QUADS);
	if (currentColor == 0)
		glColor3d(0.2, 0.2, 0.2);
	if (currentColor == 1)
		glColor3d(1.0, 1.0, 1.0);
	glVertex2f(xr, yr);
	glVertex2f(xr, 50 + yr);
	if (currentColor == 0)
		glColor3d(1, 0, 0);
	if (currentColor == 1)
		glColor3d(0, 1.0, 0);
	glVertex2f(125 + xr, 50 + yr);
	glVertex2f(125 + xr, yr);
	glEnd();

	glColor3d(1, 1, 1);
	glRasterPos2i((gameWidth) / 2 - 50, gameHeight - 50);
	string text = "Nr vieti: " + to_string(viata);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)text.c_str());

	glColor3d(1, 1, 1);
	glRasterPos2i((gameWidth) / 2 - 45, gameHeight - 75);
	string textScor = "Scor: " + to_string(scor);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18, (const unsigned char*)textScor.c_str());

	glFlush();
	glutPostRedisplay();
	glutSwapBuffers();
	if (viata == 0) {
		exit(0);
	}
}


void specialkey(int key, int x, int y)
{
	switch (key) {
	case GLUT_KEY_UP:
		if (yr > 400)
			break;
		yr = yr + 100;
		cout << "UP" << endl;
		glutPostRedisplay();
		break;
	case GLUT_KEY_DOWN:
		if (yr < 100)
			break;
		yr = yr - 100;
		cout << "DOWN" << endl;
		glutPostRedisplay();
		break;
	case GLUT_KEY_LEFT:
		if (xr < 30)
			break;
		xr = xr - 30;
		cout << "LEFT" << endl;
		glutPostRedisplay();
		break;
	case GLUT_KEY_RIGHT:
		if (xr > (gameWidth - 160))
			break;
		xr = xr + 30;
		cout << "RIGHT" << endl;
		glutPostRedisplay();
		break;
	}
}


void main(int argc, char** argv)
{
	int menuMain, menuColor, menuRotation, menuSpeed;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(gameWidth, gameHeight);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Trafic");
	init();
	glutDisplayFunc(deseneazaScena);
	glutSpecialFunc(specialkey);

	menuColor = glutCreateMenu(callback_Color);
	glutAddMenuEntry("Rosu ", 0);
	glutAddMenuEntry("Verde ", 1);

	menuRotation = glutCreateMenu(callback_Rotation);
	glutAddMenuEntry("Normal", 0);
	glutAddMenuEntry("90", 1);
	glutAddMenuEntry("45", 2);

	menuSpeed = glutCreateMenu(callback_Speed);
	glutAddMenuEntry("Normal", 0);
	glutAddMenuEntry("Rapid", 1);
	glutAddMenuEntry("Turbo", 2);

	menuMain = glutCreateMenu(callback_Main);

	glutAddSubMenu("Rotatie", menuRotation);
	glutAddSubMenu("Culoare", menuColor);
	glutAddSubMenu("Viteza", menuSpeed);
	glutAddMenuEntry("Iesire ", 0);

	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop();
}