////SURSA:  lighthouse3D:  http://www.lighthouse3d.com/tutorials/glut-tutorial/keyboard-example-moving-around-the-world/ 
//
//#include<gl/freeglut.h>
//#include<math.h>
//// angle of rotation for the camera direction
//float angle = 0.0;
//// actual vector representing the camera's direction
//float lx = 0.0f, lz = -1.0f;
//// XZ position of the camera
//float x = 0.0f, z = 5.0f;
//
//GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//GLfloat pozitial0[] = { 1.0, 5.0, 3.0, 1.0 };
//GLfloat rosu[] = { 1.0, 0.0, 0.0, 1.0 };
//GLfloat albastru[] = { 0.0, 0.0, 1.0, 1.0 };
//GLfloat verde[] = { 0.0, 1.0, 0.0, 1.0 };
//GLfloat magenta[] = { 1.0, 0.0, 1.0, 1.0 };
//GLfloat morcov[] = { 1.0, 0.5, 0.5, 1.0 };
//GLfloat alb[] = { 1.0, 1.0, 1.0, 0.0 };
//GLfloat gri[] = { 0.9, 0.9, 0.9, 0.0 };
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
//	gluPerspective(45.0f, ratio, 0.1f, 100.0f);
//
//	// Get Back to the Modelview
//	glMatrixMode(GL_MODELVIEW);
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
//	// Draw Eyes
//	glMaterialfv(GL_FRONT, GL_EMISSION, albastru);
//
//	glPushMatrix();
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glTranslatef(0.05f, 0.10f, 0.18f);
//	glutSolidSphere(0.05f, 10, 10);
//	glTranslatef(-0.1f, 0.0f, 0.0f);
//	glutSolidSphere(0.05f, 10, 10);
//	glPopMatrix();
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//
//	// Draw Nose
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, morcov);
//
//	glColor3f(1.0f, 0.5f, 0.5f);
//	glutSolidCone(0.08f, 0.5f, 10, 2);
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//}
//
//
//
//void renderScene(void) {
//
//	// Clear Color and Depth Buffers
//
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//	glEnable(GL_LIGHTING);
//	glEnable(GL_LIGHT0);
//
//	glLightfv(GL_LIGHT0, GL_POSITION, pozitial0);
//	glLightfv(GL_LIGHT0, GL_AMBIENT, verde);
//
//	glLightf(GL_LIGHT0, GL_CONSTANT_ATTENUATION, 0.8);
//	glLightf(GL_LIGHT0, GL_LINEAR_ATTENUATION, 0.1);
//	//glLightf(GL_LIGHT0, GL_QUADRATIC_ATTENUATION, 0.2);
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
//	glMaterialfv(GL_FRONT, GL_EMISSION, gri);
//
//	glColor3f(0.9f, 0.9f, 0.9f);
//	glBegin(GL_QUADS);
//	glVertex3f(-100.0f, 0.0f, -100.0f);
//	glVertex3f(-100.0f, 0.0f, 100.0f);
//	glVertex3f(100.0f, 0.0f, 100.0f);
//	glVertex3f(100.0f, 0.0f, -100.0f);
//	glEnd();
//
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//
//	// Draw 36 SnowMen
//	for (int i = -3; i < 3; i++)
//		for (int j = -3; j < 3; j++) {
//			glPushMatrix();
//			glTranslatef(i * 10.0, 0, j * 10.0);
//			drawSnowMan();
//			glPopMatrix();
//		}
//
//	glutSwapBuffers();
//}
//
//void processNormalKeys(unsigned char key, int x, int y)
//{
//
//	switch (key) {
//	case 'l':
//		angle -= 0.01f;
//		lx = sin(angle);
//		lz = -cos(angle);
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
//	// init GLUT and create window
//
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(320, 320);
//	glutCreateWindow("Scena 3D cu oameni de zapada");
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
//	// enter GLUT event processing cycle
//	glutMainLoop();
//
//	return 1;
//}