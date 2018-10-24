#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int maxcount,mincount;
		if(n%2==1)
		{
			maxcount=0;
			mincount=0;
		}
		else
		{
			maxcount=n/2;
			mincount=n/4+(n-4*(n/4))/2;
		}
		cout<<mincount<<" "<<maxcount<<"\n";
	}
}
