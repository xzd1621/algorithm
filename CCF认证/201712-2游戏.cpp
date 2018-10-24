#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int personnum(int *b,int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(b[i]==1)
		sum++;	
	}
	return sum;
}
bool out(int t,int k)
{
	if(t%k==0||(t-k)%10==0)
	return 1;
	return 0;
}
int main()
{
	int n,k;
	while(cin>>n>>k)
	{
		if(k==1)
		cout<<n<<"\n";
		else
		{
			int a[n+1],b[n+1],t=0;
			for(int i=1;i<=n;i++)
			a[i]=i;
			for(int i=1;i<=n;i++)
			b[i]=1;
			while(personnum(b,n)>1)
			{
				for(int i=1;i<=n;i++)
				{
					if(b[i]==1)
					t++;
					if(out(t,k))
					b[i]=0;
				}
			}
			for(int i=1;i<=n;i++)
			{
				if(b[i]==1)
				{
					cout<<i<<"\n";
					break;
				}
			}
		} 
		
	}
}
