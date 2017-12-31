#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
	double xo,yo,xa,ya,xb,yb,arc,angle,a,b,o;
	int t ,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%lf",&xo);
	    a=2*xo;
	    printf("Case %d: %.2lf\n",i,a*a-2.0*acos(0.0)*xo*xo);
	}
	return 0;
}
