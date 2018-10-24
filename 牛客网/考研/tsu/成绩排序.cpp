#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
struct student
{
    string name;
    int score;
    int index;
};
bool cmp0(student a,student b)
{
	return a.score>b.score;
}
bool cmp1(student a,student b)
{
    return a.score<b.score;
}
int main()
{
    int n;
    vector<student>s;
    int a;
    while(cin>>n)
    {
    	cin>>a;
		s.resize(n);
	    for(int i=0;i<n;i++)
	    {
	    	cin>>s[i].name>>s[i].score;
	    	s[i].index=i;
	    }
	    if(a==0)
	    sort(s.begin(),s.end(),cmp0);
	    else
	    sort(s.begin(),s.end(),cmp1);
	    for(int i=0;i<n;i++)
	    {
	    	cout<<s[i].name<<" "<<s[i].score<<"\n";
		}
		s.clear();
	}
    return 0;
}
