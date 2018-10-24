#include<iostream>
#include<vector> 
using namespace std;
int main()
{
	int a0,a1,p,q,k;
	while(cin>>a0>>a1>>p>>q>>k)
	{
		int an,an1=a1,an2=a0;
		for(int i=2;i<=k;i++)
		{
			an=((p*an1)%10000+(q*an2)%10000)%10000;
			an2=an1;
			an1=an;
		}
//		a[i]=((p*a[i-1])%10000+(q*a[i-2])%10000)%10000;
		cout<<an<<"\n";
	}
}
