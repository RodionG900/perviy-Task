#ifndef CLGRAF_H
#define CLGRAF_H
#include "clDraw.h"

class ClGraf: public clDraw
{
    public:

        ClGraf(int a, int b, int c, int d, int* val); // ���������� � ������ ��������� ���, ������ �������, �������
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
        int q; //���������� ��� ��������� ���
        int w; //���������� ����� ��������� ���
        int e; //������ ��������� ���
        int m; //������ ������� ���������
        int* matrixsm;
};

#endif // CLGRAF_H
