#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ax,ay,bx,by,cx,cy,dx,dy,area,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d%d%d",&ax,&ay,&bx,&by,&cx,&cy);
        dx=ax-(bx-cx);
        dy=ay-(by-cy);
        printf("Case %d: %d %d %.0lf\n",i,dx,dy,abs(.5*(cx*dy+dx*ay+ax*by+bx*cy-cx*by-ay*bx-ax*dy-cy*dx)));
    }
}
