#include<iostream>
#include<algorithm> 
#include<string>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=n-1;i>=0;i--)
		cout<<a[i]<<" ";
		cout<<"\n";
	}
}
