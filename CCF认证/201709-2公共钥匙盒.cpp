#include<iostram>
#include<algorithm>
using namespace std;
struct key
{
	int w;
	int s;
	int c;
};
bool cmp(key a,key b)
{
	if(a.s==b.s)
	return a.c<b.c;
	if(a.w==b.w)
	return a.w<b.w;
	return a.s<b.s;
}
int main()
{
	int n,k;
	while(cin>>n>>k)
	{
		key te[k];
		int a[n+1];
		for(int i=1;i<=n;i++)
		a[i]=i;
		for(int i=0;i<k;i++)
		{
			cin>>te[i].w>>te[i].s>>te[i].c;
			te[i].c+=te[i].s;
		}
		sort(te,te+k,cmp);
		for(int i=0;i<k;i++)
		{
			
		}
	}
}
