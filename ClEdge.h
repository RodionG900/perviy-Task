#ifndef CLEDGE_H
#define CLEDGE_H
#include <cstdlib>
#include "clLine.h"

class clEdge: public clLine
{
    public:
        clEdge();
        clEdge(int a, int b, int c, int d, int i);
        virtual ~clEdge();

        char* Getm() { return m; }
        void Setm(int val) { itoa(val, m, 10); }
        void Show();

    protected:

    private:
        char* m;
};

#endif // CLEDGE_H
