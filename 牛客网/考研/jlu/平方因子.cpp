#include<iostream>
using namespace std;
void judge(int n)
{
	bool flag=0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%(i*i)==0)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	cout<<"Yes\n";
	else
	cout<<"No\n";
}
int main()
{
	int n;
	while(cin>>n)
	judge(n);
}
