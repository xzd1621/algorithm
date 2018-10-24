#include<iostream>
#include<cmath> 
using namespace std;
bool judge(int a,int b,int k)
{
	for(int i=0;i<k;i++)
	{
		if(a%10==b%10)
		{
			a/=10;
			b/=10;
		}
		else
		return true;		
	}
	return false;
}
int main()
{
	int a,b,k;
	while(cin>>a>>b>>k&&!(a==0&&b==0))
	{
		if(!judge(a,b,k))
		cout<<"-1\n";
		else
		cout<<a+b<<"\n";
	}
}
