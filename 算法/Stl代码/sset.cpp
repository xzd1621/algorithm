#include<iostream>
#include<set>
using namespace std;
struct cmp{
    bool operator()(const int &a,const int &b)
    {
        return a>b;
    }
};
int main()
{
    set<int,cmp>s;
    s.insert(1);
    //s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    //s.insert(3);

    cout<<*s.end()<<endl;
    s.erase(3);
    set<int,cmp>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<"\n";
    set<int>::reverse_iterator rit;
    for(rit=s.rbegin();rit!=s.rend();rit++)
    {

        cout<<*rit<<" ";
    }
    cout<<"\n";
    it=s.find(2);
    if(it!=s.end())
        cout<<*it<<endl;
    else
        cout<<"not find it\n";

    s.clear();
    cout<<s.size();
    multiset<string>ms;
    ms.insert("111");
    ms.insert("122");
    ms.insert("123");
    for(multiset<string>::iterator it=ms.begin();it!=ms.end();it++)
    {
        cout<<*it<<endl;
    }
}
