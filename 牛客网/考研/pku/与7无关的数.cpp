#include<iostream>
#include<cmath>
using namespace std;
bool judge(int n)
{
	if(n%7==0)
	return false;
	else
	{
		int t;
		while(n>0)
		{
			t=n%10;
			n=n/10;
			if(t==7)
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	while(cin>>n)
	{
		long long sum=0;
		for(int i=1;i<=n;i++)
		{
			if(judge(i))
			sum+=i*i;
		}
		cout<<sum<<"\n";
	}
}
