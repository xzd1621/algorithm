#include<iostream>
#include<algorithm> 
#include<string>
using namespace std;
int dp(int m,int n)
{
	if(n==1||n==0)
	return 1;
	else if(n>m)
	return dp(m,m);
	else
	return dp(m,n-1)+dp(m-n,n);
}
int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		cout<<dp(m,n)<<"\n";
	}
}
