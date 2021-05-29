/*
#include <windows.h>  // sunt mentionate fisiere (biblioteci) care urmeaza sa fie incluse 
#include <gl/freeglut.h> // nu trebuie uitat freeglut.h (sau glut.h sau gl.h & glu.h)

void init(void)  // initializare fereastra de vizualizare
{
	glClearColor(0.75, 0.75, 0.75, 0.0); // precizeaza culoarea de fond a ferestrei de vizualizare

	glMatrixMode(GL_PROJECTION);  // se precizeaza este vorba de o reprezentare 2D, realizata prin proiectie ortogonala
	gluOrtho2D(-20.0, 200.0, -20.0, 200.0); // sunt indicate coordonatele extreme ale ferestrei de vizualizare
}
void desen(void) // procedura desenare  
{

	// segmentele
	glLineWidth(4.0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(0, 0);
	glVertex2i(0, 100);
	glVertex2i(0, 0);
	glVertex2i(100, 0);
	glVertex2i(0, 100);
	glVertex2i(100, 100);
	glVertex2i(100, 0);
	glVertex2i(100, 100);

	glVertex2i(30, 30);
	glVertex2i(30, 130);
	glVertex2i(30, 30);
	glVertex2i(130, 30);
	glVertex2i(130, 30);
	glVertex2i(130, 130);
	glVertex2i(30, 130);
	glVertex2i(130, 130);

	glVertex2i(0, 0);
	glVertex2i(30, 30);
	glVertex2i(0, 100);
	glVertex2i(30, 130);
	glVertex2i(100, 0);
	glVertex2i(130, 30);
	glVertex2i(100, 100);
	glVertex2i(130, 130);
	glEnd();

	
	glEnable(GL_POINT_SMOOTH);
	glPointSize(15);
	glBegin(GL_POINTS);

	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(0, 0);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(100, 0);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(0, 100);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2i(100, 100);

	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(30, 30);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(30, 130);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(130, 30);
	glColor3f(1.0, 0.0, 1.0);
	glVertex2i(130, 130);
	glEnd();

	glDisable(GL_POINT_SMOOTH);
	glFlush(); // proceseaza procedurile OpenGL cat mai rapid
}
void main(int argc, char** argv)
{
	glutInit(&argc, argv); // initializare GLUT / OpelGL
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // se utilizeaza un singur buffer | modul de colorare RedGreenBlue (= default)
	glutInitWindowPosition(300, 50); // pozitia initiala a ferestrei de vizualizare (in coordonate ecran)
	glutInitWindowSize(700, 700); // dimensiunile ferestrei 
	glutCreateWindow("Cub RGB"); // creeaza fereastra, indicand numele ferestrei de vizualizare - apare in partea superioara

	init(); // executa procedura de initializare
	glClear(GL_COLOR_BUFFER_BIT); // reprezentare si colorare fereastra de vizualizare
	glutDisplayFunc(desen); // procedura desen este invocata ori de cate ori este nevoie
	glutMainLoop(); // ultima instructiune a programului, asteapta (eventuale) noi date de intrare
}
*/