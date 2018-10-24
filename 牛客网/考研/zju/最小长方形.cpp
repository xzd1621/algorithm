#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
	int x,y;
	while(1)
	{
		int maxx=-(2<<30-1),maxy=-(2<<30-1),minx=2<<30-1,miny=2<<30-1,count=0;
		while(cin>>x>>y&&x!=0&&y!=0)
		{
			count++;
			if(x>maxx)
			maxx=x;
			if(x<minx)
			minx=x;
			if(y>maxy)
			maxy=y;
			if(y<miny)
			miny=y;
		}
		if(x==0&&y==0&&count==0)
		break;
		cout<<minx<<" "<<miny<<" "<<maxx<<" "<<maxy<<"\n";
	}
	
}
