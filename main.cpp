#include "clNode.h"
#include "clEdge.h"
#include "ClGraf.h"
#include "clCircle.h"
#include "clDraw.h"
#include "clLine.h"
#include "clNode.h"

const int n=7, zero=0;

using namespace std;

int main()
{
    int A[n*n] = {  0, 0, 5, 8, 1, 1, 0,
              0, 0, 0, 4, 0, 1, 0,
              2, 0, 0, 1, 0, 0, 0,
              8, 4, 1, 0, 0, 0, 0,
              1, 0, 0, 0, 0, 0, 1,
              1, 1, 0, 0, 0, 0, 9,
              0, 0, 0, 0, 1, 9, 0
           };

    clNode k;
    ClGraf grafinia(300, 250, 150, n, A); // координаты и радиус невидимой окр, размер матрицы, матрица

    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm,"");
    grafinia.Show();

    readkey();
    closegraph();
    cout << "Hello world!"<< endl;
    return 0;
}
