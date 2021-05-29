//
//#include <iostream>
//#include <windows.h>  // sunt mentionate fisiere (biblioteci) care urmeaza sa fie incluse 
//#include <gl/freeglut.h> // nu trebuie uitat freeglut.h (sau glut.h sau gl.h & glu.h)
//
//using namespace std;
//
//void init(void)  // initializare fereastra de vizualizare
//{
//	glClearColor(0.80, 0.80, 0.80, 0.0); // precizeaza culoarea de fond a ferestrei de vizualizare
//
//	glMatrixMode(GL_PROJECTION);  // se precizeaza este vorba de o reprezentare 2D, realizata prin proiectie ortogonala
//	gluOrtho2D(-10.0, 30.0, -10.0, 30.0); // sunt indicate coordonatele extreme ale ferestrei de vizualizare
//}
//
//struct Punct {
//	float x;
//	float y;
//}A, B, C, D;
//
//Punct punct_intersectie;
//
//void verificare_intersectie(Punct A, Punct B, Punct C, Punct D) {
//	float a = A.y - B.y;
//	float b = B.x - A.x;
//	float c = A.x * B.y - A.y * B.x;
//	if ((a * C.x + b * C.y + c) * (a * D.x + b * D.y + c) >= 0)
//		cout << "AB si CD nu se intersecteaza." << endl;
//	else
//		cout << "Segmentele AB si CD se intersecteaza." << endl;
//}
//
//bool intersectie(Punct A, Punct B, Punct C, Punct D) {
//	float px, py;
//	float a1 = C.x - D.x;
//	float b1 = B.x - A.x;
//	float c1 = C.x - A.x;
//	float a2 = C.y - D.y;
//	float b2 = B.y - A.y;
//	float c2 = C.y - A.y;
//
//	float t0 = (a2 * c1 - a1 * c2) / (b1 * a2 - b2 * a1);
//	float s0;
//	if (a1)
//		s0 = (c1 - b1 * t0) / a1;
//	else
//		s0 = (c2 - b2 * t0) / a2;
//	cout << "t0 = " << t0 << endl;
//	cout << "s0 = " << s0 << endl;
//
//	punct_intersectie.x = (1 - t0) * A.x + t0 * B.x;
//	punct_intersectie.y = (1 - t0) * A.y + t0 * B.y;
//
//	if (s0 <= 0 || s0 >= 1 || t0 <= 0 || t0 >= 1)
//		return 0;
//	return 1;
//}
//
//void desen() // procedura desenare  
//{
//	// segmentele
//	glLineWidth(2.0);
//	glBegin(GL_LINES);
//	glColor3f(0.0, 0.0, 0.85);  // culoarea primului segment
//	glVertex2i(A.x, A.y);
//	glVertex2i(B.x, B.y);
//	//glColor3f(0.0, 1.0, 0.5);  // culoarea celui de-al doilea segment
//	glVertex2i(C.x, C.y);
//	glVertex2i(D.x, D.y);
//	glEnd();
//	verificare_intersectie(A, B, C, D);
//	if (intersectie(A, B, C, D)) {
//		glEnable(GL_POINT_SMOOTH);
//		glPointSize(3);
//		glBegin(GL_POINTS);
//		glColor3f(1.0, 0.0, 0.0); // culoarea punctului de intersectie
//		glVertex2i(punct_intersectie.x, punct_intersectie.y);
//		glEnd();
//		glDisable(GL_POINT_SMOOTH);
//	}
//
//	glFlush(); // proceseaza procedurile OpenGL cat mai rapid
//}
//
//void main(int argc, char** argv)
//{
//	int a;
//	cout << "Punctul A: ";
//	cin >> A.x >> A.y;
//	cout << endl;
//	cout << "Punctul B: ";
//	cin >> B.x >> B.y;
//	cout << endl;
//	cout << "Punctul C: ";
//	cin >> C.x >> C.y;
//	cout << endl;
//	cout << "Punctul D: ";
//	cin >> D.x >> D.y;
//	cout << endl;
//
//	glutInit(&argc, argv); // initializare GLUT / OpelGL
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // se utilizeaza un singur buffer | modul de colorare RedGreenBlue (= default)
//	glutInitWindowPosition(300, 50); // pozitia initiala a ferestrei de vizualizare (in coordonate ecran)
//	glutInitWindowSize(700, 700); // dimensiunile ferestrei 
//	glutCreateWindow("Puncte & Segmente"); // creeaza fereastra, indicand numele ferestrei de vizualizare - apare in partea superioara
//
//	init(); // executa procedura de initializare
//	glClear(GL_COLOR_BUFFER_BIT); // reprezentare si colorare fereastra de vizualizare
//	glutDisplayFunc(desen); // procedura desen este invocata ori de cate ori este nevoie
//	glutMainLoop(); // ultima instructiune a programului, asteapta (eventuale) noi date de intrare
//}
//
//
