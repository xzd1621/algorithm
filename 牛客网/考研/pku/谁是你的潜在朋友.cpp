#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int a[n];
		map<int,int>m;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			m[a[i]]++;
		}
		for(int i=0;i<n;i++)
		{
			if(m[a[i]]==1)
			cout<<"BeiJu\n";
			else
			cout<<m[a[i]]-1<<"\n";
		}
		
	}
}
