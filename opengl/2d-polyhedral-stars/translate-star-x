//#include <windows.h> i'm using linux
#include <GL/glut.h>
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

void init(void)
{
    glutInitWindowPosition (50, 100);
    glutInitWindowSize (400, 400);
    glutInitDisplayMode(GLUT_SINGLE |  GLUT_RGB );
    glutCreateWindow("StarX");
    glClearColor (0.5, 0.5, 0.5, 1.0);
}
void TStarX(float x, float y, int Face, float Radius)
{

  float Centerx = 0.0;
  float Centery = 0.0;
	int i;
	int amount = 360;
	float twicePi = 2.0f * 3.14;
  glTranslatef(x,y,0);
  glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
  glBegin(GL_POLYGON);


  int b = 360/Face;
  int s = 90/Face*2;
  int r = 0;
  int temp = 0; //temp

  r = 0+b; //result
  for(int loop=1;loop <= Face*2;loop++)
  {
      glVertex2f(Centerx + (Radius * cos(r *  twicePi / amount)),Centery + (Radius * sin(r * twicePi / amount)));
      temp = r + s;
      //radius/2.5 is better show big objects than radius/5 (so changed radius/5 to radius/2.5)
      glVertex2f(Centerx + (Radius/5 * cos(temp *  twicePi / amount)),Centery + (Radius/5 * sin(temp * twicePi / amount)));
      // glVertex2f(Centerx + (Radius/2.5 * cos(temp *  twicePi / amount)),Centery + (Radius/2.5 * sin(temp * twicePi / amount)));
      r=r+b;
      glVertex2f(Centerx + (Radius * cos(r *  twicePi / amount)),Centery + (Radius * sin(r * twicePi / amount)));
  }
	glEnd();
}


 void display(void)
 {
   glClear(GL_COLOR_BUFFER_BIT);
   TStarX(0.1,-0.1,3,0.5);
   glFlush();
 }

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
