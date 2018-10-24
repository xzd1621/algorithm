#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	int t,sum=0;
	while(cin>>t)
	{
		v.push_back(t);
		if (t==0)
		break;
	}
	for(int i=0;i<v.size();i++)
	{
		if (v[i]==1)
		sum+=1;
		else if (v[i]==2)
		{
			int countcontinue=0;
			int j; 
			for(j=i;v[j]==2;j++)
			{
				countcontinue++;
			}
			sum+=countcontinue*(countcontinue+1);
			i=j-1;
		}
		else if(v[i]==0)
		{
			break;
		}	
	}
	cout<<sum<<"\n";
} 
