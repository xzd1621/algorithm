#include<iostream>
#include<string>
#include<cmath> 
using namespace std;
int main()
{
	int t,m;
	while(cin>>t>>m)
	{
		int a[m],v[m];
		for(int i=0;i<m;i++)
		cin>>a[i]>>v[i];
		int dp[t+1];
		for(int i=0;i<=t;i++)
		dp[i]=0; 
		for(int i=0;i<m;i++)
		{
			for(int j=t;j>=a[i];j--)
			dp[j]=max(dp[j],dp[j-a[i]]+v[i]);
		}
		cout<<dp[t]<<"\n";
	}
}
