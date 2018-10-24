#include<iostream>
#include<cmath>
using namespace std;
//bool judge(int a,int b)
//{
//	int m=min(a,b);
//	for(int i=2;i<=m;i++)
//	{
//		if(a%i==0&&b%i==0)
//		return false;
//	}
//	return true;
//}
int gcd(int a,int b)
{
	if(b==0)
	return a;
	else return gcd(b,a%b);
}
int main()
{
	int n;
	while(cin>>n)
	{
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
//				if(judge(a[i],a[j]))
//				sum++;
				if(gcd(max(a[i],a[j]),min(a[i],a[j]))==1)
				sum++;
			}
		}
		cout<<sum<<"\n";
	}
}
