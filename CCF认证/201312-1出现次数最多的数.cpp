#include<iostream>
#include<algorithm> 
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[n];
		int b[10001];
		int maxcount=0,maxnum=a[0];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]]++;
			if(b[a[i]]>maxcount)
			{
				maxcount=b[a[i]];
			}
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			if(maxcount==b[a[i]])
			{
				cout<<a[i]<<"\n";
				break;
			}
		}
	}
}
