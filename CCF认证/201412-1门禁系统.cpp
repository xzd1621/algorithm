#include<iostream>
#include<algorithm>
using namespace std;
int n;
int a[1001],b[1001];
void count(int t,int num)
{
	int count=0;
	for(int i=0;i<=t;i++)
	{
		if(a[i]==num)
		count++;
	}
	cout<<count<<" ";
}
int main()
{
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			count(i,a[i]);
		}
		cout<<"\n";
	}
}
