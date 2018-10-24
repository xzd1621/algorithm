#include<iostream>
using namespace std;
int a[1000001];
void f()
{
	a[1]=1;
	a[2]=2;
	for(int i=3;i<=1000000;i++)
	{
		if(i%2==1)
		a[i]=a[i-1];
		else if(i%2==0)
		a[i]=(a[i-1]+a[i/2])%1000000000;
	}
}
int main() 
{
	int n;
	f();
	while(cin>>n)
		cout<<a[n]<<"\n";
}
