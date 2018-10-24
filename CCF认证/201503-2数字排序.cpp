#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
struct node{
	int n;
	int count;
	friend bool operator <(node a,node b)
	{
		if(a.count==b.count)
		return a.n>b.n;
		return a.count<b.count;
	}
};
int main()
{
	int n;
	while(cin>>n)
	{
		int a[n],b[1001],flag[1001];
		for(int i=0;i<1001;i++)
		flag[i]=0,b[i]=0;
		priority_queue<node>q;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]]++;
		}
		for(int i=0;i<n;i++)
		{
			if(!flag[a[i]])
			{
				node T;
				T.n=a[i];
				T.count=b[a[i]];
				q.push(T);
				flag[a[i]]=1;
			}
		}
		while(!q.empty())
		{
			node T=q.top();
			cout<<T.n<<" "<<T.count<<"\n";
			q.pop();
		}
	}
}
