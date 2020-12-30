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
    glutCreateWindow("Star03");
    glClearColor (0.5, 0.5, 0.5, 1.0);
}
//void Star03(float Radius)
void Star03() 
{
  float Radius= 0.5;//static radius
	int i;
	int amount = 360;
	float twicePi = 2.0f * 3.14;
  glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
  glBegin(GL_POLYGON);

		for(i = 0; i <= amount;i++)
    {
      if(i == 120 || i == 240 || i == 360)
      {
        glVertex2f(Radius * cos(i *  twicePi / amount),Radius * sin(i * twicePi / amount));
      }
      else if(i == 60 || i == 180 || i == 300)
      {
        //radius/4 is better show object than radius/2 (so changed radius/2 to radius/4)
        glVertex2f(Radius/2 * cos(i *  twicePi / amount),Radius/2 * sin(i * twicePi / amount));
        // glVertex2f(Centerx + (Radius/4 * cos(i *  twicePi / amount)),Centery + (Radius/4 * sin(i * twicePi / amount)));
      }
		}
	glEnd();
}


 void display(void)
 {
   glClear(GL_COLOR_BUFFER_BIT);
   //Star03(0,0,0.5);
   Star03();
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
