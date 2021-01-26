#ifndef HELLWORLD_H
#define HELLWORLD_H
#include <iostream>
using namespace std;
class sha
{
    float x,y,z;
    public:
        sha() {x = y = z = 0.0;}
        sha(float a, float b, float c):x(a),y(b),z(c) {}
        void printxyz(void);
        float getx(void) const;
        float gety(void) const;
        float getz(void);
};

void sha::printxyz(void) { cout << "x:" << x << " y:" << y << " z:" << z << endl; }
float sha::getx(void) const { return x; }
float sha::gety(void) const { return y; }
float sha::getz(void) { return z ; }
void swapPositions(sha &obj1,sha &obj2)
{
        sha obj3;
        obj3 = obj1;
        obj1 = obj2;
        obj2 = obj3;
}

void multiPositionPrintxyz(sha &obj1,sha &obj2,sha &obj3)
{
    obj1.printxyz();
    obj2.printxyz();
    obj3.printxyz();
    cout << endl;
}

#endif // HELLWORLD_H
