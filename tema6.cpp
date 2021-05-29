//#include<gl/freeglut.h>
//#include<math.h>
//// angle of rotation for the camera direction
//float angle = 0.0;
//// actual vector representing the camera's direction
//float lx = 0.0f, lz = -1.0f;
//// XZ position of the camera
//float x = 0.0f, z = 5.0f;
//
//int sezonCurent = 0;
//int bool_iluminare = 1; // fara iluminare la startup
//float speed = 1;
//
//GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//GLfloat pozitial0[] = { 1.0, 10.0, 3.0, 1.0 };
//GLfloat rosu[] = { 1.0, 0.0, 0.0, 1.0 };
//GLfloat albastru[] = { 0.0, 0.0, 1.0, 1.0 };
//GLfloat galben[] = { 1.0, 1.0, 0.2, 1.0 };
//GLfloat verde[] = { 0.0, 1.0, 0.0, 1.0 };
//GLfloat verde_inchis[] = { 0.0, 0.7, 0.0, 1.0 };
//GLfloat maro[] = { 0.64, 0.16, 0.16, 0 };
//GLfloat alb[] = { 1.0, 1.0, 1.0, 0.0 };
//GLfloat gri[] = { 0.8, 0.8, 0.8, 0.0 };
//GLfloat negru[] = { 0.0, 0.0, 0.0, 0.0 };
//
//void changeSize(int w, int h)
//{
//
//	// Prevent a divide by zero, when window is too short
//	// (you cant make a window of zero width).
//	if (h == 0)
//		h = 1;
//	float ratio = w * 1.0 / h;
//
//	// Use the Projection Matrix
//	glMatrixMode(GL_PROJECTION);
//
//	// Reset Matrix
//	glLoadIdentity();
//
//	// Set the viewport to be the entire window
//	glViewport(0, 0, w, h);
//
//	// Set the correct perspective.
//	gluPerspective(45.0f, ratio, 0.1f, 1000.0f);
//
//	// Get Back to the Modelview
//	glMatrixMode(GL_MODELVIEW);
//}
//
///*
//	Callback-uri pentru meniu si submeniu
//*/
//
//void callback_Color(int key)
//{
//	sezonCurent = key; // 0 pentru iarna, 1 primavara
//}
//
//void callback_Speed(int key)
//{
//	if (key == 0) {
//		speed = 1;
//	}
//	if (key == 1) {
//		speed = 5;
//	}
//	if (key == 2) {
//		speed = 10;
//	}
//
//}
//
//void callback_Iluminare(int key)
//{
//	bool_iluminare = key; // 0 ON, 1 OFF
//}
//
//void callback_Main(int key)
//{
//	if (key == 0)
//	{
//		exit(0);
//	}
//}
//
//
//void drawSnowMan() {
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, negru);
//
//	glColor3f(1.0f, 1.0f, 1.0f);
//
//	// Draw Body
//	glTranslatef(0.0f, 0.75f, 0.0f);
//	glutSolidSphere(0.75f, 20, 20);
//
//	// Draw Head
//	glTranslatef(0.0f, 1.0f, 0.0f);
//	glutSolidSphere(0.25f, 20, 20);
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, rosu);
//
//	// Draw Eyes
//	glPushMatrix();
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glTranslatef(0.05f, 0.10f, 0.18f);
//	glutSolidSphere(0.05f, 10, 10);
//	glTranslatef(-0.1f, 0.0f, 0.0f);
//	glutSolidSphere(0.05f, 10, 10);
//	glPopMatrix();
//
//	// Draw Nose
//	glColor3f(1.0f, 0.5f, 0.5f);
//	glutSolidCone(0.08f, 0.5f, 10, 2);
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//}
//
//void drawTrees() {
//
//	// Trunchi
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, maro);
//
//	glColor3f(0.5f, 0.2f, 0.2f);
//	glTranslatef(0.0f, 4, 0.0f);
//	glRotated(90, 1, 0, 0);
//	glutSolidCylinder(0.5f, 5, 50, 10);
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, verde);
//
//	// Frunze
//	glColor3f(0.1f, 0.6f, 0);
//	glTranslatef(0.0f, 0.3f, 0.0f);
//	glutSolidSphere(2, 20, 20);
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//
//}
//
//void drawBush() {
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, verde_inchis);
//
//	glColor3f(0.1f, 0.6f, 0);
//	glTranslatef(0.0f, 0, 0.0f);
//	glutSolidSphere(1, 20, 20);
//
//	glTranslatef(1.2f, 0, 0.0f);
//	glutSolidSphere(0.8f, 20, 20);
//
//	glTranslatef(0.8f, 0.2f, 0.6f);
//	glutSolidSphere(0.6f, 20, 20);
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//}
//
//void drawTeaspoon() {
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, galben);
//
//	glColor3f(1.0f, 0.0, 0.0);
//	glTranslatef(0.0f, 0.4, 0.0f);
//	glutSolidTeaspoon(15.0);
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//}
//
//void drawMasina() {
//	
//	glMaterialfv(GL_FRONT, GL_EMISSION, negru);
//
//	//desenare roti
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glTranslatef(0.0f, 0.32, 0.0f);
//	glutWireSphere(0.35, 60, 160);
//
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glTranslatef(-2.0f, 0.0, 0.0f);
//	glutWireSphere(0.35, 60, 160);
//
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glTranslatef(0.0f, 0.0, 2.0f);
//	glutWireSphere(0.35, 60, 160);
//
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glTranslatef(2.0f, 0.0, 0.0f);
//	glutWireSphere(0.35, 60, 160);
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//
//	//desenare caroserie
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, albastru);
//
//	glColor3f(0.0, 0.0, 0.8);
//	glTranslatef(-1.0, 1.5, -1.0);
//	glutSolidCube(2.5);
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//
//}
//
//void renderScene(void) {
//
//	// Clear Color and Depth Buffers
//
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//	if (bool_iluminare == 0) {
//		glEnable(GL_LIGHTING);
//		glEnable(GL_LIGHT0);
//	}
//	else {
//		glDisable(GL_LIGHTING);
//		glDisable(GL_LIGHT0);
//	}
//
//	glLightfv(GL_LIGHT0, GL_POSITION, pozitial0);
//	glLightfv(GL_LIGHT0, GL_AMBIENT, alb);
//
//	glLightf(GL_LIGHT0, GL_CONSTANT_ATTENUATION, 0.8);
//	glLightf(GL_LIGHT0, GL_LINEAR_ATTENUATION, 0.2);
//
//	// Reset transformations
//	glLoadIdentity();
//	// Set the camera
//	gluLookAt(x, 1.0f, z,
//		x + lx, 1.0f, z + lz,
//		0.0f, 1.0f, 0.0f);
//
//	// Draw ground
//
//	if (sezonCurent == 0) {
//		glMaterialfv(GL_FRONT, GL_EMISSION, gri);
//		glColor3f(0.9f, 0.9f, 0.9f);
//	}
//	else {
//		glMaterialfv(GL_FRONT, GL_EMISSION, verde_inchis);
//		glColor3f(0, 0.5f, 0);
//	}
//	glBegin(GL_QUADS);
//	glVertex3f(-100.0f, 0.0f, -100.0f);
//	glVertex3f(-100.0f, 0.0f, 100.0f);
//	glVertex3f(100.0f, 0.0f, 100.0f);
//	glVertex3f(100.0f, 0.0f, -100.0f);
//	glEnd();
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//
//	// Draw sky
//
//	if (sezonCurent == 0)
//		glColor3f(0, 0, 0);
//	else
//		glColor3f(1, 1, 0.6);
//	glBegin(GL_QUADS);
//	glVertex3f(-100, 0, -100);
//	glVertex3f(100, 0, -100);
//	glVertex3f(100, 100, -100);
//	glVertex3f(-100, 100, -100);
//	glEnd();
//
//	glBegin(GL_QUADS);
//	glVertex3f(100, 0, -100);
//	glVertex3f(100, 0, 100);
//	glVertex3f(100, 100, 100);
//	glVertex3f(100, 100, -100);
//	glEnd();
//
//	glBegin(GL_QUADS);
//	glVertex3f(-100, 0, 100);
//	glVertex3f(100, 0, 100);
//	glVertex3f(100, 100, 100);
//	glVertex3f(-100, 100, 100);
//	glEnd();
//
//	glBegin(GL_QUADS);
//	glVertex3f(-100, 0, -100);
//	glVertex3f(-100, 0, 100);
//	glVertex3f(-100, 100, 100);
//	glVertex3f(-100, 100, -100);
//	glEnd();
//
//	// Draw objects
//	for (int i = -9; i < 9; i++)
//		for (int j = -9; j < 9; j++) {
//			glPushMatrix();
//			glTranslatef(i * 10.0, 0, j * 10.0);
//			if (sezonCurent == 0)
//				drawSnowMan();
//			else if (sezonCurent == 1 && ((i + j) % 3 == 0))
//				drawTrees();
//			else if (i == 3 && j == 5)
//				drawTeaspoon();
//			else if (i == 6 && j == -1)
//				drawMasina();
//			else if (i == 0 && j == 4)
//				drawMasina();
//			else
//				drawBush();
//			glPopMatrix();
//		}
//
//	glutSwapBuffers();
//}
//
//void processNormalKeys(unsigned char key, int xx, int yy)
//{
//	float fraction = 0.1f * speed;
//
//	switch (key) {
//	case 'a':
//		angle -= (0.01f * speed);
//		lx = sin(angle);
//		lz = -cos(angle);
//		break;
//	case 'd':
//		angle += (0.01f * speed);
//		lx = sin(angle);
//		lz = -cos(angle);
//		break;
//	case 'w':
//		x += lx * fraction;
//		z += lz * fraction;
//		break;
//	case 's':
//		x -= lx * fraction;
//		z -= lz * fraction;
//		break;
//
//	}
//	if (key == 27)
//		exit(0);
//}
//
//void processSpecialKeys(int key, int xx, int yy) {
//
//	float fraction = 0.1f;
//
//	switch (key) {
//	case GLUT_KEY_LEFT:
//		angle -= 0.01f;
//		lx = sin(angle);
//		lz = -cos(angle);
//		break;
//	case GLUT_KEY_RIGHT:
//		angle += 0.01f;
//		lx = sin(angle);
//		lz = -cos(angle);
//		break;
//	case GLUT_KEY_UP:
//		x += lx * fraction;
//		z += lz * fraction;
//		break;
//	case GLUT_KEY_DOWN:
//		x -= lx * fraction;
//		z -= lz * fraction;
//		break;
//	}
//}
//
//
//int main(int argc, char** argv) {
//
//	int menuMain, menuSezon, menuSpeed, menuIluminare;
//
//	// init GLUT and create window
//
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(320, 320);
//	glutCreateWindow("Scena 3D");
//
//	// register callbacks
//	glutDisplayFunc(renderScene);
//	glutReshapeFunc(changeSize);
//	glutIdleFunc(renderScene);
//	glutKeyboardFunc(processNormalKeys);
//	glutSpecialFunc(processSpecialKeys);
//
//	// OpenGL init
//	glEnable(GL_DEPTH_TEST);
//
//	// Meniu
//
//	menuSezon = glutCreateMenu(callback_Color);
//	glutAddMenuEntry("Iarna ", 0);
//	glutAddMenuEntry("Primavara ", 1);
//
//	menuSpeed = glutCreateMenu(callback_Speed);
//	glutAddMenuEntry("Incet", 0);
//	glutAddMenuEntry("Normal", 1);
//	glutAddMenuEntry("Rapid", 2);
//
//	menuIluminare = glutCreateMenu(callback_Iluminare);
//	glutAddMenuEntry("On", 0);
//	glutAddMenuEntry("Off", 1);
//
//	menuMain = glutCreateMenu(callback_Main);
//
//	glutAddSubMenu("Sezon", menuSezon);
//	glutAddSubMenu("Viteza", menuSpeed);
//	glutAddSubMenu("Iluminare", menuIluminare);
//	glutAddMenuEntry("Iesire ", 0);
//
//	glutAttachMenu(GLUT_RIGHT_BUTTON);
//
//	// enter GLUT event processing cycle
//	glutMainLoop();
//
//	return 1;
//}
//
