#include<iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		short a[n+1][m+1];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				cin>>a[i][j];
		for(int i=m;i>=1;i--)	
		{
			for(int j=1;j<=n;j++)
			cout<<a[j][i]<<" ";
			cout<<"\n";
		}
	}
}
