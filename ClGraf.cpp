#include "ClGraf.h"
#include "clNode.h"
#include "ClEdge.h"
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

ClGraf::ClGraf(int a, int b, int c, int d, int* val):q(a), w(b), e(c), m(d), matrixsm(new int[m*m])
{
    cout<<"ClGraf();\n";
    int i;
    for (i=0; i<m*m; i++)
    {
        matrixsm[i]=val[i];
    }
}

ClGraf::~ClGraf()
{
    cout<<q<<"   ~ClGraf();\n";
}
void ClGraf::Show()
{
    int i, j, k, matrixsm2[m][m], a[m][m];
    for(i=0; i<m; i++)
    {
        int x=(int)Getq()+Gete()*cos(2*3.14*i/m);
        int y=(int)Getw()+Gete()*sin(2*3.14*i/m);
        clNode alotofcircle(x, y, 30, i+1);
        alotofcircle.Show();
    }

    i=0;
    j=0;
    k=0;

    while(i<m*m)
    {
        while (j<m)
        {
            matrixsm2[k][j]=matrixsm[i];
            a[k][j]=matrixsm2[k][j];
            i++;
            j++;
        }
        k++;
        j=0;
    }


    for(i=0; i<m; i++)
        for(j=0; j<m; j++)
        {
            if (matrixsm2[i][j]>0)
            {
                int x1=(int)Getq()+Gete()*cos(2*3.14*i/m);
                int y1=(int)Getw()+Gete()*sin(2*3.14*i/m);
                int x2=(int)Getq()+Gete()*cos(2*3.14*j/m);
                int y2=(int)Getw()+Gete()*sin(2*3.14*j/m);
                clEdge alotofedge(x1, y1, x2, y2, matrixsm2[i][j]);
                alotofedge.Show();
            }
            else matrixsm2[i][j]=99999;
        }

    int st,fin;
    cin>>st>>fin;
    st=st-1;
    fin=fin-1;

    int V=m;

    int distance[V], count, index, u, kill=st+1;
bool visited[V];

for (i=0; i<V; i++)
{
distance[i]=99999; visited[i]=false;
}
distance[st]=0;
for (count=0; count<V-1; count++)
{
int min=99999;
for (i=0; i<V; i++)
if (!visited[i] && distance[i]<=min)
{
min=distance[i]; index=i;
}
u=index;
visited[u]=true;
for (i=0; i<V; i++)
if (!visited[i] && matrixsm2[u][i] && distance[u]!=99999 &&
distance[u]+matrixsm2[u][i]<distance[i]){
distance[i]=distance[u]+matrixsm2[u][i];
}
}


cout<<"Dis:\n";
for (i=0; i<V; i++) if (distance[i]!=99999)
cout<<kill<<" > "<<i+1<<" = "<<distance[i]<<endl;
else cout<<kill<<" > "<<i+1<<" = "<<"error"<<endl;
readkey();

setcolor(14);
i=0;
j=0;
int tmp=0;

while (fin!=st){   //1!=0
while((i<m)&&(j<m)) {
if (distance[i]+matrixsm2[i][fin]==distance[fin]) {    //расстояне
    int x1=(int)Getq()+Gete()*cos(2*3.14*i/m);
    int y1=(int)Getw()+Gete()*sin(2*3.14*i/m);
    int x2=(int)Getq()+Gete()*cos(2*3.14*fin/m);
    int y2=(int)Getw()+Gete()*sin(2*3.14*fin/m);
    clEdge alotofedge(x1, y1, x2, y2, matrixsm2[i][fin]);
    alotofedge.Show();
    tmp=i;
    j=m;
}
i++;
}
fin=tmp;
j=0;
i=0;
}

}
