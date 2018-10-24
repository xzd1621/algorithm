#include<queue>
#include<iostream>
using namespace std;
struct Info
{
    string name;
    float score;
    bool operator <(const Info &a)const
    {
        return a.score<score;//按照score从小到大排序，若从大到小则用>
    }
};

struct cmp
{
    bool operator()(const int &a,const int &b)
    {
        return a>b;
        //从小到大用>,从大到小用<
    }
};
int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();//队首出队
    }
    cout<<"\n";

    //优先队列
    priority_queue<int>pq;
    pq.push(2);
    pq.push(3);
    pq.push(1);
    pq.push(4);
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";//读取队首
        pq.pop();
    }
    cout<<endl;

    priority_queue<Info>q1;
    Info info;
    info.name="jack";
    info.score=90;
    q1.push(info);
    info.name="mike";
    info.score=92;
    q1.push(info);
    info.name="john";
    info.score=89;
    q1.push(info);
    while(!q1.empty())
    {
        cout<<q1.top().name<<" "<<q1.top().score;//读取队首
        q1.pop();
        cout<<"\n";
    }
    cout<<endl;

    priority_queue<int,vector<int>,cmp>q2;
    q2.push(3);
    q2.push(5);
    q2.push(1);
    q2.push(6);
    q2.push(-1);
    q2.push(2);
    while(!q2.empty())
    {
        cout<<q2.top()<<" ";
        q2.pop();
    }
    cout<<"\n";
}
