#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int countj=0,counto=0,t;
		for(int i=0;i<n;i++)
		{
			cin>>t;
			if(t%2==1)
			countj++;
			else
			counto++;
		}
		if(counto>countj)
		cout<<"NO\n";
		else
		cout<<"YES\n";
	}
}
