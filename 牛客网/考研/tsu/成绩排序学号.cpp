#include<iostream>
#include<queue>
using namespace std;
struct student
{
	int number;
	int score;
	bool operator < (const student &a) const
	{
		if(a.score==score)
		return a.number<number;
		return a.score<score;
	}
}s;
int main()
{
	int n;
	while(cin>>n)
	{
		int p,q;
		priority_queue<student>pq;
		for(int i=0;i<n;i++)
		{
			cin>>p>>q;
			s.number=p;
			s.score=q;
			pq.push(s);
		}
		while(!pq.empty())
		{
			student t=pq.top();
			cout<<t.number<<" "<<t.score<<"\n";
			pq.pop();
		} 
	}
	return 0;
}
