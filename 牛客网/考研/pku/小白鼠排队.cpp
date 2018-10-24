#include<iostream>
#include<string>
#include<queue> 
using namespace std;
struct month{
	int weight;
	string hat;
	bool operator <(const month &a) const
	{
		return weight<a.weight;
	}
};
int main()
{
	int n;
	while(cin>>n)
	{
		month m[n];
		priority_queue<month>t;
		for(int i=0;i<n;i++)
		{
			cin>>m[i].weight>>m[i].hat;
			t.push(m[i]);
		}
		while(!t.empty())
		{
			cout<<t.top().hat<<"\n";
			t.pop();
		}
		
	}
}
