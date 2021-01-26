#include <hellworld.h>
int main()
{
    struct user
    {
        string id;
    } emp[2];

    user ppl;
    ppl.id = "hi";
    emp->id[1] = 1;
//    for(int x=0;x>=0;x++)
//    {
//        cout << "enter id:";
//        getline(cin,emp[x].id);
//    }

    cout << emp[0].id << "\t" << emp[1].id << "\t" << ppl.id << endl;

    sha cj(1.01,2.50608511231566545656446456,3.66);
    cout << cj.getx() << endl;
    cout << cj.gety() << endl;
    cout << cj.getz() << endl;


//    sha bigsmoke(10,10,10);
//    sha rider(-5,-5,-5);
//    multiPositionPrintxyz(cj,bigsmoke,rider);
//    swapPositions(cj,bigsmoke);
//    multiPositionPrintxyz(cj,bigsmoke,rider);
//    swapPositions(cj,rider);
//    multiPositionPrintxyz(cj,bigsmoke,rider);
}
