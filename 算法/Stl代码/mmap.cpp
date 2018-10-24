#include<iostream>
#include<map>
#include<string>
using namespace std;
struct cmp
{
    bool operator()(const int &a,const int &b)
    {

        return a>b;
    }
};
struct Info
{
    string name;
    float score;
    bool operator <(const Info &a)const
    {
        return a.score<score;
    }
};
int main()
{
//    map<string,float>m;
//    m["jack"]=98.5;
//    m["bomi"]=100.0;
//    m["kate"]=97.5;
//    m.erase("bomi");
//
//    map<string,float>::iterator it;
//    for(it=m.begin();it!=m.end();it++)
//    {
//        cout<<(*it).first<<":"<<(*it).second<<"\n";
//    }
//    map<string,float>::reverse_iterator rit;
//    for(rit=m.rbegin();rit!=m.end();rit++)
//    {
//        cout<<(*rit).first<<(*rit).second<<"\n";
//    }

//    it=m.find("kate");
//    if(it!=m.end())
//    {
//        cout<<(*it).first<<":"<<(*it).second<<"\n";
//    }
//    else
//    {
//        cout<<"not found it\n";
//    }

    map<int ,char>m;
    m[1]='a';
    m[2]='e';
    m[3]='c';
    m[4]='d';
    map<int,char>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<(*(it+1)).first<<":"<<(*(it+1)).second<<"\n";
    }

//    map<Info,int>m;
//    Info info;
//    info.name="jack";
//    info.score=99.8;
//    m[info]=10;
//    info.name="john";
//    info.score=100;
//    m[info]=25;
//    for(map<Info,int>::iterator it=m.begin();it!=m.end();it++)
//    {
//        cout<<(*it).first.name<<":"<<(*it).first.score<<":"<<(*it).second<<endl;
//    }
    return 0;
}
