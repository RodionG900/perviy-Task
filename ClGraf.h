#ifndef CLGRAF_H
#define CLGRAF_H
#include "clDraw.h"

class ClGraf: public clDraw
{
    public:

        ClGraf(int a, int b, int c, int d, int* val); // координаты и радиус невидимой окр, размер матрицы, матрица
        virtual ~ClGraf();

        int Getq() { return q; }
        void Setq(int val) { q = val; }
        int Getw() { return w; }
        void Setw(int val) { w = val; }
        int Gete() { return e; }
        void Sete(int val) { e = val; }
         int Getm() { return m; }
        void Setm(int val) { m = val; }
        void Show();

    private:
        int q; //координата икс невидимой окр
        int w; //координата игрек невидимой окр
        int e; //радиус невидимой окр
        int m; //размер матрицы смежности
        int* matrixsm;
};

#endif // CLGRAF_H
