#include<iostream>
using namespace std;
int main()
{
	int n;
	int f[21];
	f[1]=1;
	f[2]=2;
	for(int i=3;i<=20;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	while(cin>>n)
	{
		cout<<f[n]<<"\n";
	}
}
