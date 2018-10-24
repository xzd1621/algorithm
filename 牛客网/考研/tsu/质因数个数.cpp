#include<iostream>
#include<cmath>
using namespace std;
bool iszhi(int n)
{
	bool flag=true;
	for(int i=2;i<=int(sqrt(n));i++)
	{
		if(n%i==0)
		{
			flag=false;
			break;
		}
	}
	return flag;
}
int count(int n,int sum)
{
	if(n==1)
	{
		sum=0;
		return sum;
	}
	if(iszhi(n))
	{
		return 1;
	}
	for(int i=2;i<=int(sqrt(n))+1;i++)
	{
		if(iszhi(i)&&n%i==0)
		{
			sum=sum+count(n/i,sum)+1;
			break;
		}
	}
	return sum;
}
int main()
{
	int n;
	while(cin>>n)
	{
		cout<<count(n,0)<<"\n";
	}
}
