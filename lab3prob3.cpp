//
//#include <iostream>
//#include <windows.h>  // sunt mentionate fisiere (biblioteci) care urmeaza sa fie incluse 
//#include <gl/freeglut.h> // nu trebuie uitat freeglut.h (sau glut.h sau gl.h & glu.h)
//
//using namespace std;
//
//void init3(void)  // initializare fereastra de vizualizare
//{
//	glClearColor(0.80, 0.80, 0.80, 0.0); // precizeaza culoarea de fond a ferestrei de vizualizare
//
//	glMatrixMode(GL_PROJECTION);  // se precizeaza este vorba de o reprezentare 2D, realizata prin proiectie ortogonala
//	gluOrtho2D(0.0, 500.0, 0.0, 500.0); // sunt indicate coordonatele extreme ale ferestrei de vizualizare
//}
//
//struct Punct
//{
//	float x;
//	float y;
//}p[50];
//
//struct Vector {
//	float x;
//	float y;
//	float z;
//}v[50];
//
//Vector vtest1, vtest2;
//int n;
//
//void citire_punct(Punct& pct) {
//	cout << "x = ";
//	cin >> pct.x;
//	cout << "y = ";
//	cin >> pct.y;
//	cout << endl;
//}
//
//void afisare_punct(Punct pct) {
//	cout << "x = " << pct.x << endl;
//	cout << "y = " << pct.y << endl;
//}
//
//void citire_vector(Vector &vec) {
//	cout << "x = ";
//	cin >> vec.x;
//	cout << "y = ";
//	cin >> vec.y;
//	cout << "z = ";
//	cin >> vec.z;
//	cout << endl;
//}
//
//void afisare_vector(Vector vec) {
//	cout << "x = " << vec.x << endl;
//	cout << "y = " << vec.y << endl;
//	cout << "z = " << vec.z << endl;
//}
//
//Vector produs_vectorial(Vector v1, Vector v2) {
//	Vector rez;
//	rez.x = 1 * (v1.y * v2.z - v2.y * v1.z);
//	rez.y = (-1) * (v1.x * v2.z - v2.x * v1.z);
//	rez.z = 1 * (v1.x * v2.y - v2.x * v1.y);
//	return rez;
//}
//
//
//void desen3() // procedura desenare  
//{
//	// segmentele
//	glLineWidth(4.0);
//	glBegin(GL_LINES);
//	glColor3f(0.0, 0.0, 0.0);
//	for (int i = 0; i < n - 1; i++) {
//		glVertex2i(p[i].x, p[i].y);
//		glVertex2i(p[i + 1].x, p[i + 1].y);
//	}
//	glVertex2i(p[n-1].x, p[n-1].y);
//	glVertex2i(p[0].x, p[0].y);
//	glEnd();
//
//	//desenare puncte
//	Vector rez = produs_vectorial(v[n - 1], v[0]);
//	glEnable(GL_POINT_SMOOTH);
//	glPointSize(10);
//	glBegin(GL_POINTS);
//	if (rez.z >= 0)
//		glColor3f(0.0, 1.0, 0.0);
//	else
//		glColor3f(1.0, 0.0, 0.0);
//	glVertex2i(p[0].x, p[0].y);
//	glEnd();
//	glDisable(GL_POINT_SMOOTH);
//
//	for (int i = 1; i < n; i++) {
//		rez = produs_vectorial(v[i - 1], v[i]);
//		glEnable(GL_POINT_SMOOTH);
//		glPointSize(10);
//		glBegin(GL_POINTS);
//		if (rez.z >= 0)
//			glColor3f(0.0, 1.0, 0.0);
//		else
//			glColor3f(1.0, 0.0, 0.0);
//		glVertex2i(p[i].x, p[i].y);
//		glEnd();
//		glDisable(GL_POINT_SMOOTH);
//	}
//
//	glFlush(); // proceseaza procedurile OpenGL cat mai rapid
//}
//
//void main(int argc, char** argv)
//{
//	Vector rez;
//	// test functie produs_vectorial
//	citire_vector(vtest1);
//	citire_vector(vtest2);
//	rez = produs_vectorial(vtest1, vtest2);
//	afisare_vector(rez);
//
//	cout << "Numarul de puncte: ";
//	cin >> n;
//
//	// citire puncte
//	for (int i = 0; i < n; i++) {
//		cout << "Coordonate punct " << i + 1 << ":" << endl;
//		citire_punct(p[i]);
//	}
//
//	// afisare puncte
//	for (int i = 0; i < n; i++) {
//		cout << "Afisare Coordonate punct " << i + 1 << ":" << endl;
//		afisare_punct(p[i]);
//	}
//
//	// formam vectorii
//	for (int i = 0; i < n - 1; i++) {
//		v[i].x = p[i + 1].x - p[i].x;
//		v[i].y = p[i + 1].y - p[i].y;
//		v[i].z = 0;
//	}
//	v[n - 1].x = p[0].x - p[n - 1].x;
//	v[n - 1].y = p[0].y - p[n - 1].y;
//	v[n - 1].z = 0;
//
//	for (int i = 0; i < n; i++) {
//		cout << "Afisare vector " << i+1 << ": " << endl;
//		afisare_vector(v[i]);
//	}
//
//	glutInit(&argc, argv); // initializare GLUT / OpelGL
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // se utilizeaza un singur buffer | modul de colorare RedGreenBlue (= default)
//	glutInitWindowPosition(300, 50); // pozitia initiala a ferestrei de vizualizare (in coordonate ecran)
//	glutInitWindowSize(700, 700); // dimensiunile ferestrei 
//	glutCreateWindow("Laborator 3 Problema 3"); // creeaza fereastra, indicand numele ferestrei de vizualizare - apare in partea superioara
//
//	init3(); // executa procedura de initializare
//	glClear(GL_COLOR_BUFFER_BIT); // reprezentare si colorare fereastra de vizualizare
//	glutDisplayFunc(desen3); // procedura desen este invocata ori de cate ori este nevoie
//	glutMainLoop(); // ultima instructiune a programului, asteapta (eventuale) noi date de intrare
//}
