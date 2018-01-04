#include <bits/stdc++.h>
using namespace std;

int main() {
	double xo,yo,xa,ya,xb,yb,arc,angle,a,b,o;
	int t ,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%lf%lf%lf%lf%lf%lf",&xo,&yo,&xa,&ya,&xb,&yb);
	    a=sqrt((xo-xb)*(xo-xb)+(yo-yb)*(yo-yb));
	    b=sqrt((xo-xa)*(xo-xa)+(yo-ya)*(yo-ya));
	    o=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));

	    angle=acos((b*b+a*a-o*o)/(2.0*a*b));
	    arc=a*angle;
	    printf("Case %d: %lf\n",i,arc);
	}
	return 0;
}
