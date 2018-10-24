#include<iostream>
#include<algorithm>
#include<queue>
#include<cmath>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[n],max=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(i>0&&abs(a[i]-a[i-1])>max)
			max=abs(a[i]-a[i-1]);
		}
		cout<<max<<"\n";
	}
}
