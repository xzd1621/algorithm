#include<iostream>
using namespace std;
int main()
{
	int f[31];
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=30;i++)
	f[i]=f[i-1]+f[i-2];
	int n;
	while(cin>>n)
	cout<<f[n]<<"\n";
}
