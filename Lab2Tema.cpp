//
//#include <windows.h>  // sunt mentionate fisiere (biblioteci) care urmeaza sa fie incluse 
//#include <gl/freeglut.h> // nu trebuie uitat freeglut.h (sau glut.h sau gl.h & glu.h)
//
//void init1(void)  // initializare fereastra de vizualizare
//{
//	glClearColor(0.85, 0.85, 0.85, 0.0); // precizeaza culoarea de fond a ferestrei de vizualizare
//
//	glMatrixMode(GL_PROJECTION);  // se precizeaza este vorba de o reprezentare 2D, realizata prin proiectie ortogonala
//	gluOrtho2D(5.0, 500.0, 5.0, 500.0); // sunt indicate coordonatele extreme ale ferestrei de vizualizare
//}
//void desen1(void) // procedura desenare  
//{
//
//	// segmentele
//	glLineWidth(5.0);
//	glBegin(GL_LINES);
//	glColor3f(1.0, 1.0, 0.0);  // culoarea primului segment
//	glVertex2i(370, 30);
//	glVertex2i(20, 380);
//	glColor3f(0.0, 1.0, 0.5);  // culoarea celui de-al doilea segment
//	glVertex2i(10, 10);
//	glVertex2i(500, 500);
//	glEnd();
//
//	// punctul de intersectie
//
//	glEnable(GL_POINT_SMOOTH);
//	glPointSize(11);
//	glBegin(GL_POINTS);
//	glColor3f(0.0, 0.0, 0.0); // culoarea punctului de intersectie
//	glVertex2i(200, 200);
//	glEnd();
//	glDisable(GL_POINT_SMOOTH);
//
//	glFlush(); // proceseaza procedurile OpenGL cat mai rapid
//}
//
//void main(int argc, char** argv)
//{
//	glutInit(&argc, argv); // initializare GLUT / OpelGL
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // se utilizeaza un singur buffer | modul de colorare RedGreenBlue (= default)
//	glutInitWindowPosition(300, 50); // pozitia initiala a ferestrei de vizualizare (in coordonate ecran)
//	glutInitWindowSize(700, 700); // dimensiunile ferestrei 
//	glutCreateWindow("Puncte & Segmente"); // creeaza fereastra, indicand numele ferestrei de vizualizare - apare in partea superioara
//
//	init1(); // executa procedura de initializare
//	glClear(GL_COLOR_BUFFER_BIT); // reprezentare si colorare fereastra de vizualizare
//	glutDisplayFunc(desen1); // procedura desen este invocata ori de cate ori este nevoie
//	glutMainLoop(); // ultima instructiune a programului, asteapta (eventuale) noi date de intrare
//}
//
