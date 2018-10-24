#include<iostream>
using namespace std;
int n;
void swap(int *a,int p,int q)
{
	for(int i=1;i<=n;i++)
	{
		if(a[i]==p)
		{
			if(q>0)
			{
				int temp=a[i];
				for(int j=i;j<=i+q-1;j++)
				{
					a[j]=a[j+1];
				}
				a[i+q]=temp;
			}
			else
			{
				int temp=a[i];
				for(int j=i;j>=i+q+1;j--)
				{
					a[j]=a[j-1];
				}
				a[i+q]=temp;
			}
			break; 
		}
	}
}
int main()
{
	int m;
	while(cin>>n>>m)
	{
		int a[n+1];
		for(int i=1;i<=n;i++)
		a[i]=i;
		int p[m],q[m];
		for(int i=0;i<m;i++)
		{
			cin>>p[i]>>q[i];
			swap(a,p[i],q[i]);
		}
		for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
		cout<<"\n";
	}
 } 
