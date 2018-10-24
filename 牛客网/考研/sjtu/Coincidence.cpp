#include<iostream>
#include<cmath> 
#include<string>
using namespace std;
int f(string a,string b)
{
	int lena=a.length(),lenb=b.length();
	int dp[lena+1][lenb+1];
	for(int i=0;i<=lenb;i++)
	dp[0][i]=0;
	for(int i=0;i<=lena;i++)
	dp[i][0]=0;
	for(int i=1;i<=lena;i++)
	{
		for(int j=1;j<=lenb;j++)
		{
			if(a[i-1]==b[j-1])
			{
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else
			{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	return dp[lena][lenb];
}
int main()
{
	string a,b;
	while(cin>>a>>b)
	{
		cout<<f(a,b)<<"\n";
	}
}
