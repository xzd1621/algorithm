#include<iostream>
using namespace std;
int main()
{
	int a,num[5];
	while(cin>>a)
	{
		int sum=0;
		for(int i=0;i<5;i++)
		{
			cin>>num[i];
			sum+=num[i]<a?num[i]:0;
		}
		cout<<sum<<"\n";
	}
}
