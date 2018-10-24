#include<iostream>
#include<cmath>
#include<vector>
#include<string> 
using namespace std;
int main()
{
	
	int m,n;
	while(cin>>m>>n)
	{
		int a[n],dp[m+1];
		for(int i=0;i<n;i++)
		cin>>a[i];
		dp[0]=0;
		for(int i=1;i<=m;i++)
		dp[i]=101;
		for(int i=0;i<n;i++)
		{
			for(int j=m;j>=a[i];j--)
			{
				dp[j]=min(dp[j],dp[j-a[i]]+1);
			}
		}
		dp[m]=dp[m]!=101?dp[m]:0;
		cout<<dp[m]<<"\n";
	}
}
