#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[n][n];
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		cin>>a[i][j];
		int flag=1,i=0,j=0,k=0;//flag 1ºá£¬2¨L£¬3¨J£¬4Êú 
		while(k<n*n)
		{
			k++;
			cout<<a[i][j]<<" ";
			if(flag==1)
			{
				if(i==0)
				{
					flag=2; 
				}
				else if(i==n-1)
				{
					flag=3;
				}
				j++;
			}
			else if(flag==2)
			{
				
			}
				else if()	
		}
				
		
	}
}
