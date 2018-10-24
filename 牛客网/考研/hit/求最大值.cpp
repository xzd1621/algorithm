#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
	long long a[10],maxnum=-(1<<64);
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
		if(a[i]>maxnum)
		maxnum=a[i];
	}
	cout<<"max="<<maxnum<<"\n";
}
