#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[101][2],b[101][2];
		int map[101][101];
		for(int i=0;i<n;i++)
		cin>>a[i][0]>>a[i][1]>>b[i][0]>>b[i][1];
		for(int i=0;i<101;i++)
		for(int j=0;j<101;j++)
		map[i][j]=0; 
		for(int i=0;i<n;i++)
		{
			for(int j=a[i][0];j<b[i][0];j++)
			{
				for(int k=a[i][1];k<b[i][1];k++)
				{
					map[j][k]=1;
				}
			}
		}
		int count=0;
		for(int i=0;i<101;i++)
		{
			for(int j=0;j<101;j++)
			{
				if(map[i][j])
				count++;
			}
		}
		cout<<count<<"\n";
	}
}
