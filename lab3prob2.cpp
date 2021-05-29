//#include <windows.h>
//#include <gl/freeglut.h>
//#include <iostream>
//
//using namespace std;
//
//struct Punct {
//	float x;
//	float y;
//	float z;
//}A, B, C, D, M, O1, O2;
//
//int p1[] = { A.x, A.y, A.z };
//int p2[] = { B.x, B.y, B.z };
//int p3[] = { C.x, C.y, C.z };
//int p4[] = { D.x, D.y, D.z };
//int p5[] = { M.x, M.y, M.z };
//
//
//GLint winWidth = 600, winHeight = 600;
//GLfloat xx0 = O1.x, yy0 = O1.y, zz0 = O1.z;
//GLfloat xref = 3.0, yref = 1.0, zref = 4.0;
//GLfloat Vx = 8.0, Vy = 0.0, Vz = -8.0;
//
//
//GLfloat xwMin = -10.0, ywMin = -10.0, xwMax = 10.0, ywMax = 10.0;
//GLfloat dnear = 0.0, dfar = 20.0;
//
//void init(void)
//{
//	glClearColor(1.0, 1.0, 1.0, 0.0);
//
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	gluLookAt(xx0, yy0, zz0, xref, yref, zref, Vx, Vy, Vz);
//
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(xwMin, xwMax, ywMin, ywMax, dnear, dfar);
//}
//
//void desen1(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//
//
//	glPolygonMode(GL_FRONT, GL_FILL);
//	glPolygonMode(GL_BACK, GL_LINE);
//	glLineWidth(6.0);
//	glBegin(GL_POLYGON);
//	glColor3f(1.0, 0.0, 0.0);
//	glVertex3i(A.x, A.y, A.z);
//	glColor3f(0.0, 1.0, 0.0);
//	glVertex3i(B.x, B.y, B.z);
//	glColor3f(0.0, 0.0, 1.0);
//	glVertex3i(D.x, D.y, D.z);
//	glColor3f(1.0, 1.0, 0.0);
//	glVertex3i(C.x, C.y, C.z);
//	glEnd();
//
//	glEnable(GL_POINT_SMOOTH);
//	glPointSize(3);
//	glBegin(GL_POINTS);
//	glColor3f(0.0, 1.0, 0.0);
//	glVertex3i(M.x, M.y, M.z);
//	glEnd();
//	glDisable(GL_POINT_SMOOTH);
//
//	//glutPostRedisplay();
//
//	glFlush();
//}
//
//void desen2(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//
//
//	glPolygonMode(GL_FRONT, GL_FILL);
//	glPolygonMode(GL_BACK, GL_LINE);
//	glLineWidth(6.0);
//	
//	glBegin(GL_POLYGON);
//	glColor3f(1.0, 0.0, 0.0);
//	glVertex3i(A.x, A.y, A.z);
//	glColor3f(0.0, 1.0, 0.0);
//	glVertex3i(B.x, B.y, B.z);
//	glColor3f(0.0, 0.0, 1.0);
//	glVertex3i(D.x, D.y, D.z);
//	glColor3f(1.0, 1.0, 0.0);
//	glVertex3i(C.x, C.y, C.z);
//	glEnd();
//	
//
//	//glutPostRedisplay();
//
//	glFlush();
//}
//
//void mouse2(int button, int state, int x, int y)
//{
//	switch (button) {
//	case GLUT_LEFT_BUTTON:
//		if (state == GLUT_DOWN)
//			xx0 = O1.x, yy0 = O1.y, zz0 = O1.z;
//		init();
//		desen1();
//		break;
//	case GLUT_RIGHT_BUTTON:
//		if (state == GLUT_DOWN)
//			xx0 = O2.x, yy0 = O2.y, zz0 = O2.z;
//		init();
//		desen2();
//		break;
//
//	}
//}
//void reshapeFcn(GLint newWidth, GLint newHeight)
//{
//	glViewport(0, 0, newWidth, newHeight);
//
//	winWidth = newWidth;
//	winHeight = newHeight;
//}
//void main(int argc, char** argv)
//{
//	A.x = 6;
//	A.y = 4;
//	A.z = 12;
//	B.x = 0;
//	B.y = 6;
//	B.z = 3;
//	C.x = 3;
//	C.y = 4;
//	C.z = 6;
//	M.x = (A.x + B.x + C.x) / 3;
//	M.y = (A.y + B.y + C.y) / 3;
//	M.z = (A.z + B.z + C.z) / 3;
//	cout << "Punctul M are coordonatele (" << M.x << ", " << M.y << ", " << M.z << ")" << endl;
//
//	D.x = B.x + C.x - A.x;
//	D.y = B.y + C.y - A.y;
//	D.z = B.z + C.z - A.z;
//	cout << "Punctul D are coordonatele (" << D.x << ", " << D.y << ", " << D.z << ")" << endl;
//
//	float detA = A.y * B.z + A.z * D.y + B.y * D.z - D.y * B.z - D.z * A.y - A.z * B.y;
//	float detB = (-1) * (A.x * B.z + A.z * D.x + B.x * D.z - D.x * B.z - D.z * A.x - A.z * B.x);
//	float detC = A.x * B.y + A.y * D.x + B.x * D.y - D.x * B.y - D.y * A.x - A.y * B.x;
//	float detD = (-1) * (A.x * B.y * D.z + A.y * D.x * B.z + B.x * D.y * A.z - D.x * B.y * A.z - D.y * A.x * B.z - A.y * B.x * D.z);
//
//	cout << detA << endl;
//	cout << detB << endl;
//	cout << detC << endl;
//	cout << detD << endl;
//
//	Punct norm;
//	float rad = sqrt(detA * detA + detB * detB + detC * detC);
//	norm.x = detA / rad;
//	norm.y = detB / rad;
//	norm.z = detC / rad;
//	cout << "n are coordonatele (" << norm.x << ", " << norm.y << ", " << norm.z << ")" << endl;
//
//	//calculare punctele in fata si spatele planului
//	O1.x = 0;
//	O1.y = 0;
//	O1.z = 0;
//	O2.x = 0;
//	O2.y = 0;
//	O2.z = 0;
//	int i, j, k;
//	for (i = -2; i < 3; i++)
//		for(j = -2; j < 3; j++)
//			for(k = -2; k < 3; k++)
//				if (detA * i + detB * j + detC * k + detD > 0) {
//					O1.x = i;
//					O1.y = j;
//					O1.z = k;
//				}
//				else if (detA * i + detB * j + detC * k + detD < 0) {
//					O2.x = i;
//					O2.y = j;
//					O2.z = k;
//				}
//
//	cout << "O1 are coordonatele (" << O1.x << ", " << O1.y << ", " << O1.z << ")" << endl;
//	cout << "O2 are coordonatele (" << O2.x << ", " << O2.y << ", " << O2.z << ")" << endl;
//
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowPosition(50, 50);
//	glutInitWindowSize(winWidth, winHeight);
//	glutCreateWindow("Poligoane in context 3D. Fata si spatele unui poligon");
//
//	init();
//	//glutMouseFunc (desen1);
//	glutMouseFunc(mouse2);
//	glutDisplayFunc(desen1);
//	glutMainLoop();
//}
//
