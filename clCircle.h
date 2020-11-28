#ifndef CLCIRCLE_H
#define CLCIRCLE_H
#include "clDraw.h"

class clCircle: public clDraw
{
    public:
        clCircle();
        clCircle(int a, int b, int c);
        virtual ~clCircle();

        int Getx() { return x; }
        void Setx(int val) { x = val; }
        int Gety() { return y; }
        void Sety(int val) { y = val; }
        int Getr() { return r; }
        void Show();

    private:
        int x;
        int y;
        const int r;
};

#endif // CLCIRCLE_H
