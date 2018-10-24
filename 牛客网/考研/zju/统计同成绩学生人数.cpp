#include<iostream>
#include<map> 
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		map<int,int>m;
		m.clear();
		int score;
		while(n--)
		{
			cin>>score;
			m[score]++;
		}
		int t;
		cin>>t;
		cout<<m[t]<<"\n";
	}
}
