#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int wanying(int n)
{
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
	return 1;
	else if(sum>n)
	return 0;
}
int main()
{
	vector<int>y;
	vector<int>w;
	for(int i=2;i<=60;i++)
	{
		if(wanying(i)==1)
		w.push_back(i);
		else if(wanying(i)==0)
		y.push_back(i);
	}
	cout<<"E: ";
	for(vector<int>::iterator it=w.begin();it!=w.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\nG: ";
	for(vector<int>::iterator it=y.begin();it!=y.end();it++)
	{
		cout<<*it<<" ";
	}
}
