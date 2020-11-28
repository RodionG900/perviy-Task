#include "clCircle.h"

clCircle::clCircle():r(22)
{
    cout<<"clCircle();\n";//ctor
}

clCircle::clCircle(int a, int b, int c):x(a), y(b), r(c)
{
    cout<<"clCircle(int, int, int);\n";//ctor
}
clCircle::~clCircle()
{
     cout<<x<<"   ~clCircle();\n";//dtor
}
void clCircle::Show()
{
     circle(x, y, r);
}
