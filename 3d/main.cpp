#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <stdlib.h>
#include <windows.h>
#include<mmsystem.h>
#include <math.h>



//------------------------------  reshapeFunc  ---------------------------------

void reshapeFunc (int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective (40.0, (GLdouble)w / (GLdouble)h, 0.5, 20.0);
    glMatrixMode(GL_MODELVIEW);
}

//------------------------------  display   -------------------------------
int zRotated=0;
void satellite()
{
    glTranslatef(0.5f,0.5f,-5.0f);
    glRotatef(60,1,0,0);
    glPushMatrix();
    glColor3f(0.7f,0.3f,0.1f);
    glutSolidSphere(1.0,50,50);
    glPopMatrix();


    glTranslatef(0.5f,0.5f,-3.5f);
    glRotatef(60,1,0,0);
    glPushMatrix();
    glColor3f(0.2f,0.3f,0.6f);
    glutSolidSphere(1.0,50,50);
    glPopMatrix();

    glTranslatef(200,200,2.0f);
    glRotatef(60,1,0,0);
    glPushMatrix();
    glColor3f(0.3,0.9,1);
    glutSolidSphere(1.0,50,50);
    glPopMatrix();


    glFlush();

}

void snow(){
    // left
    glLoadIdentity();
    glTranslatef(-6.5f,-3.5f,-13.0f);
    glPushMatrix();
    glColor3f(1,1,1);
    glutSolidSphere(1,50,50);
    glPopMatrix();

    glLoadIdentity();
    glTranslatef(-6.5f,-2.0f,-13.0f);
    glPushMatrix();
    glColor3f(1,1,1);
    glutSolidSphere(0.8,50,50);
    glPopMatrix();

    glLoadIdentity();
    glTranslatef(-6.5f,-0.8f,-13.0f);
    glPushMatrix();
    glColor3f(1,1,1);
    glutSolidSphere(0.6,50,50);
    glPopMatrix();

    // right
    glLoadIdentity();
    glTranslatef(6.5f,-3.5f,-13.0f);
    glPushMatrix();
    glColor3f(1,1,1);
    glutSolidSphere(1,50,50);
    glPopMatrix();

    glLoadIdentity();
    glTranslatef(6.5f,-2.0f,-13.0f);
    glPushMatrix();
    glColor3f(1,1,1);
    glutSolidSphere(0.8,50,50);
    glPopMatrix();

    glLoadIdentity();
    glTranslatef(6.5f,-0.8f,-13.0f);
    glPushMatrix();
    glColor3f(1,1,1);
    glutSolidSphere(0.6,50,50);
    glPopMatrix();

    glFlush();
}

void star(){
    glLoadIdentity();
    glTranslatef(6.5f,4.0f,-13.0f);
    glPushMatrix();
    glColor3f(1,1,1);
    glutSolidTorus(0.1,0.5,10,4);
    glPopMatrix();

    glLoadIdentity();
    glTranslatef(1.5f,4.0f,-13.0f);
    glPushMatrix();
    glColor3f(1,1,1);
    glutSolidTorus(0.1,0.5,10,4);
    glPopMatrix();


    glLoadIdentity();
    glTranslatef(-4.5f,4.0f,-13.0f);
    glPushMatrix();
    glColor3f(1,1,1);
    glutSolidTorus(0.1,0.5,5,4);
    glPopMatrix();

    glFlush();
}

void pyr()
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0f, 0.0f, -5.0f);
	glBegin(GL_TRIANGLES);
	glColor3f(0.1f,0.9f,1.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 1.0f);
	//*******************************
	glColor3f(0.2f, 0.1f, 0.6f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, -1.0f);
	glVertex3f(1.0f, -1.0f, -1.0f);
	//******************************
	glColor3f(0.4f, 1.0f, 0.3f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, -1.0f);
	glVertex3f(-1.0f, -1.0f, 1.0f);
	//*****************************
	glColor3f(1.0f, 0.9f, 0.3f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glVertex3f(1.3f, -1.55f, -1.2f);
	glVertex3f(1.4f, -1.0f, 1.0f);
	glEnd();

}

void rec(){
    glLoadIdentity();
    glTranslatef(-3.0f,-3.0f,-13.0f);
    glBegin(GL_QUADS);
                    // Begin drawing the color cube with 6 quads
      // Top face (y = 1.0f)
      // Define vertices in counter-clockwise (CCW) order with normal pointing out
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f( 1.0f, 1.0f, -1.0f);
      glVertex3f(-1.0f, 1.0f, -1.0f);
      glVertex3f(-1.0f, 1.0f,  1.0f);
      glVertex3f( 1.0f, 1.0f,  1.0f);

      // Bottom face (y = -1.0f)
      glColor3f(1.0f, 0.5f, 0.0f);     // Orange
      glVertex3f( 1.0f, -1.0f,  1.0f);
      glVertex3f(-1.0f, -1.0f,  1.0f);
      glVertex3f(-1.0f, -1.0f, -1.0f);
      glVertex3f( 1.0f, -1.0f, -1.0f);

      // Front face  (z = 1.0f)
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f( 1.0f,  1.0f, 1.0f);
      glVertex3f(-1.0f,  1.0f, 1.0f);
      glVertex3f(-1.0f, -1.0f, 1.0f);
      glVertex3f( 1.0f, -1.0f, 1.0f);

      // Back face (z = -1.0f)
      glColor3f(1.0f, 1.0f, 0.0f);     // Yellow
      glVertex3f( 1.0f, -1.0f, -1.0f);
      glVertex3f(-1.0f, -1.0f, -1.0f);
      glVertex3f(-1.0f,  1.0f, -1.0f);
      glVertex3f( 1.0f,  1.0f, -1.0f);

      // Left face (x = -1.0f)
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(-1.0f,  1.0f,  1.0f);
      glVertex3f(-1.0f,  1.0f, -1.0f);
      glVertex3f(-1.0f, -1.0f, -1.0f);
      glVertex3f(-1.0f, -1.0f,  1.0f);

      // Right face (x = 1.0f)
      glColor3f(1.0f, 0.0f, 1.0f);     // Magenta
      glVertex3f(1.0f,  1.0f, -1.0f);
      glVertex3f(1.0f,  1.0f,  1.0f);
      glVertex3f(1.0f, -1.0f,  1.0f);
      glVertex3f(1.0f, -1.0f, -1.0f);
   glEnd();  // End of drawing color-cube
}

void display (void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glLoadIdentity();
    glTranslatef(0.0f,0.0f,-13.0f);
    glRotatef(zRotated,0.0f,1.0f,0.0f);

    //earth
    glPushMatrix();
    glColor3f(0.0,0.9,0.0);

    glutSolidSphere(2.0,50,50);
    glPopMatrix();



    satellite();
    snow();
    star();
    rec();


    glFlush();
    glutSwapBuffers();


}

//--------------------------------  idleFunc  ----------------------------------

void idleFunc (void)
{
    zRotated += 1;
    glutPostRedisplay();
}

void texture (void){

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);


}

//----------------------------------  main  ------------------------------------


int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(1000,600);
    glutInitWindowPosition(0,0);
    glutCreateWindow("20101874");

    glClearColor (0.0, 0.0 , 0.0, 0.0);

    glutDisplayFunc (display);
    glutReshapeFunc (reshapeFunc);
    glutIdleFunc    (idleFunc);

    glClearColor(0,0,0,0);
    texture();


    sndPlaySound("Alec Koff - The Dark Night (Suspense Background Music Suspenseful background music) (online-audio-converter.com).wav" ,SND_ASYNC);
    glutMainLoop();
}
