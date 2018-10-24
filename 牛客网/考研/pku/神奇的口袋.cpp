#include<iostream>
#include<cmath> 
#define v 40
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[30],dp[41];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<=v;i++)
		dp[i]=0;
		dp[0]=1;
		for(int i=0;i<n;i++)
		{
			for(int j=v;j>=a[i];j--)
			dp[j]+=dp[j-a[i]];	
		}
		cout<<dp[v]<<"\n";
	}	
} 
