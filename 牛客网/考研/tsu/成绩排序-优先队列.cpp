#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
struct studentDesc //½µÐò 
{
    string name;
    int score;
    bool operator < (const studentDesc &a) const
    {
    	return score<a.score;
	}
}desc;
struct studentAsc //ÉýÐò 
{
    string name;
    int score;
    bool operator < (const studentAsc &a) const
    {
    	return score>a.score;
	}
}asc;
int main()
{
    int n;
    int a;
    while(cin>>n)
    {
    	cin>>a;
    	string name;
    	int score;
    	if(a==0)
    	{
   			priority_queue<studentDesc>q;
    		for(int i=0;i<n;i++)
		    {
		    	cin>>desc.name>>desc.score;
		    	q.push(desc);
		    }
		    while(!q.empty())
		    {
		    	studentDesc node=q.top();
		    	cout<<node.name<<" "<<node.score<<"\n";
		    	q.pop();
			}
		}
		else
		{
			priority_queue<studentAsc>q;
			for(int i=0;i<n;i++)
		    {
		    	cin>>asc.name>>asc.score;
		    	q.push(asc);
		    }
		    while(!q.empty())
		    {
		    	studentAsc node=q.top();
		    	cout<<node.name<<" "<<node.score<<"\n";
		    	q.pop();
			}
		}
	}
    return 0;
}
