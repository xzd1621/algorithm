#include<iostream>
#include<cmath> 
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	return a;
	else return gcd(b,a%b);
}
int f(int a,int b,int c,int d)
{
	if(a==0||b==0||c==0)
	return 21252;
	int t=gcd(a,b);
	int h=a*b/t;
	int k=h*c/gcd(h,c);
	return k;
	for(int i=0;;i++)
	{
		if(i*k>d)
		return i*k-d;
	}
}
int main()
{
	int a,b,c,d;
	while(cin>>a>>b>>c>>d)
	{
		cout<<f(a,b,c,d)<<"\n";
	}
}
