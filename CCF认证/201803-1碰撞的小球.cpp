#include<iostream>
using namespace std;
int main()
{
	int n,L,t;
	cin>>n>>L>>t;
	int a[n];
	for (int i=0;i<n;i++)
	cin>>a[i];
	int b[n];
	for(int i=0;i<n;i++)
	b[i]=1;
	for(int i=0;i<t;i++)
	{
		for(int k=0;k<n;k++)
		{
			a[k]+=b[k];
			if(a[k]==0||a[k]==L)
			{
				b[k]=-b[k];
			}
		}
		for(int z=0;z<n;z++)
		{
			for(int j=z+1;j<n;j++)
			{
				if(a[z]==a[j])
				{
					b[z]=-b[z];
					b[j]=-b[j];
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
