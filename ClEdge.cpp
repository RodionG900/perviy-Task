#include "clEdge.h"
#include<math.h>

clEdge::clEdge(): m(new char[4])
{
    cout << "clEdge();\n";
}

clEdge::clEdge(int a, int b, int c, int d, int i):clLine(a,b,c,d), m(new char[4])
{
    cout << "clEdge(int, int, int, int);\n";
    itoa(i, m, 10);
}

clEdge::~clEdge()
{
    cout<<Getx1()<< "  ~clEdge();\n";
}

void clEdge::Show()
{
    int x=(int)fabs((3*Getx1()+Getx2())/4);
    int y=(int)fabs((3*Gety1()+Gety2())/4);
    clLine::Show();
    outtextxy(x,y,m);
}
