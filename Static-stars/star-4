//#include <windows.h> i'm using linux
#include <GL/glut.h>
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

// float centx,centy,radix;

void init(void)
{
    glutInitWindowPosition (50, 100);
    glutInitWindowSize (400, 400);
    glutInitDisplayMode(GLUT_SINGLE |  GLUT_RGB );
    glutCreateWindow("Star04");
    glClearColor (0.5, 0.5, 0.5, 1.0);
}
void Star04(float Centerx, float Centery, float Radius)
{
	int i;
	int amount = 360;
	float twicePi = 2.0f * 3.14;
  glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
  glBegin(GL_POLYGON);

		for(i = 0; i <= amount;i++)
    {
      if(i == 90 || i == 180 || i == 270 || i == 360)
      {
        glVertex2f(Centerx + (Radius * cos(i *  twicePi / amount)),Centery + (Radius * sin(i * twicePi / amount)));
      }
      else if(i == 45 || i == 135 || i == 225 || i == 315)
      {
        glVertex2f(Centerx + (Radius/3 * cos(i *  twicePi / amount)),Centery + (Radius/3 * sin(i * twicePi / amount)));
      }
		}
	glEnd();
}


 void display(void)
 {
   glClear(GL_COLOR_BUFFER_BIT);
   Star04(0.5,-0.5,0.5); //static
   // Star04(argv[1],argv[2],argv[3]); //arg
   // Star04(centx,centy,radix); //var
   glFlush();
 }

int main(int argc, char *argv[])
{
  //-----use from arguments
  //   cout << "" << argc << " arguments:" << "\n";   for (int i = 0; i < argc; ++i)   cout << argv[i] << "\n"; //show arg values
 //----------------or use classic var
    // cout << "Please enter center X value: "; cin >> centx;
    // cout << "Please enter center Y value: ";  cin >> centy;
    // cout << "Please enter Radius value: "; cin >> radix;

    glutInit(&argc, argv);
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
