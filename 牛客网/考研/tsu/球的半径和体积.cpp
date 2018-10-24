#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x0,x1,y0,y1,z0,z1;
	const double PI=acos(-1);
	while(cin>>x0>>y0>>z0>>x1>>y1>>z1)
	{
		double r=sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1)+(z0-z1)*(z0-z1));
		double V=PI*r*r*r*4.0/3.0;
		printf("%.3f %.3f\n",r,V);		
	}
} 
