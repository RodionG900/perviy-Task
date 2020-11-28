#include "clLine.h"

clLine::clLine(int a, int b, int c, int d):x1(a), y1(b), x2(c), y2(d)
{
    cout<<"clLine(int, int, int, int);\n";//ctor
}

clLine::clLine()
{
    cout<<"clLine();\n";//ctor
}


clLine::~clLine()
{
    cout<<x1<<"   ~clLine();\n";
}
void clLine::Show()
{
     line(x1, y1, x2, y2);
}
