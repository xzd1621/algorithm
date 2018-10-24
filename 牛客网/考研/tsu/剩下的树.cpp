#include<iostream>
#include<algorithm>
using namespace std;
struct tree
{
	int left;
	int right;
};
bool cmp(tree a,tree b)
{
	return a.left<b.left;
}
int main()
{
	int L,M;
	while(cin>>L>>M)
	{
//		tree T[M];
//		for(int i=0;i<M;i++)
//			cin>>T[i].left>>T[i].right;
//		sort(T,T+M,cmp);
//		int sum=0;
//		for(int i=0;i<M;i++)
//		{
//			int left=T[i].left;
//			while(T[i].right>=T[i+1].left&&i<M-1)
//			{
//				i++;
//			}
//			sum+=T[i].right-left+1;
//		}
//		cout<<L+1-sum<<endl;

		bool T[L+1];
		for(int i=0;i<=L;i++)
		T[i]=false;
		int left,right;
		for(int j=0;j<M;j++)
		{
			cin>>left>>right;
			for(int i=left;i<=right;i++)
			T[i]=true;
		}
		int sum=0;
		for(int i=0;i<=L;i++)
		{
			if(!T[i])
			sum++;
		}
		cout<<sum<<endl;
	} 
}
 
