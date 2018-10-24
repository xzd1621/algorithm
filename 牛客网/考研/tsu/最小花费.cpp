#include<iostream>
#include<cmath>
using namespace std;
int l1,l2,l3,c1,c2,c3,A,B,n;
int cost(int L)
{
	if(L<=l1)
	return c1;
	else if(L<=l2)
	return c2;
	return c3;
}
int main()
{
	while(cin>>l1>>l2>>l3>>c1>>c2>>c3>>A>>B>>n)
	{
		int a[n],dp[n];
		for(int i=2;i<=n;i++)
		{
			cin>>a[i];
		}
		dp[A]=0;
		int p1,p2,p3;
		for(int i=A+1;i<=B;i++)
		{
			dp[i]=1<<31-1;
			for(int j=A;j<i;j++)
			{
				if(a[i]-a[j]<=l3)
				{
					dp[i]=min(dp[i],dp[j]+cost(a[i]-a[j]));
				}
			}
		}
		cout<<dp[B]<<"\n";
	}
}
