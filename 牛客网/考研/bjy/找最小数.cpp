#include<iostream>
#include<queue> 
using namespace std;
struct node{
	int x;
	int y;
	bool operator <(const node &a) const
	{
		if(a.x==x)
		return a.y<y;
		return a.x<x;
	}
};
int main()
{
	int n;
	while(cin>>n)
	{
		int x,y;
		priority_queue<node>q;
		for(int i=0;i<n;i++)
		{
			cin>>x>>y;
			node t;
			t.x=x;
			t.y=y;
			q.push(t);
		}
		cout<<q.top().x<<" "<<q.top().y<<"\n";
	}
	
}
