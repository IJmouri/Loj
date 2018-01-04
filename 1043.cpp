#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    double a,b,c,r,s,area,area1,ae,de,s1;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&c,&r);
        r=1/r;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        area1=area/(r+1);

        ae=b/a;
        de=c/a;

        s1=((1+ae+de)/2);

        s1=sqrt(s1*(s1-1)*(s1-ae)*(s1-de));

        printf("Case %d: %lf\n",i,sqrt(area1/s1));
    }
}
