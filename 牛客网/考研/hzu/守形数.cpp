#include<iostream>
#include<cmath> 
using namespace std;
bool judge(int n)
{
	int t=n*n;int temp=1,k=n;
	while(n>0)
	{
		n/=10;
		temp*=10;
	}
	if((t-k)%temp==0)
	return true;
	return false;
}
int main()
{
	int n;
	while(cin>>n)
	{
		if(judge(n))
		cout<<"Yes!\n";
		else
		cout<<"No!\n";
	}
}
