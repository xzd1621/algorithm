#include<iostream>
using namespace std;
int n;
int large(int *a,int t)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>t)
		{
			sum++;
		}
	}
	return sum;
}
int low(int *a,int t)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<t)
		{
			sum++;
		}
	}
	return sum;
}
int main()
{
	while(cin>>n)
	{
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int flag=0;
		for(int i=0;i<n;i++)
		{
			if(large(a,a[i])==low(a,a[i]))
			{
				flag=1;
				cout<<a[i]<<"\n";
				break; 
			}
		} 
		if(!flag)
		cout<<"-1\n";
	}
}
