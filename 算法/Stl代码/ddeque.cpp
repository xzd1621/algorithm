#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;
    deque<int>d1;
    deque<int>d2(10,1);
    d.push_back(2);
    d.push_back(3);
    cout<<d[0]<<" "<<d[1]<<"\n";
    //从头部或中间插入不增加新元素，只会将原有元素覆盖
    d.push_front(10);
    d.push_front(20);
    cout<<d[0]<<" "<<d[1]<<"\n";
    d.insert(d.begin()+1,33);
    cout<<d[0]<<" "<<d[1]<<"\n";

    for(int i=0;i<d2.size();i++)
        cout<<d2[i]<<" ";
    cout<<"\n";

    for(deque<int>::iterator it=d2.begin();it!=d2.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
    for(deque<int>::reverse_iterator rit=d2.rbegin();rit!=d2.rend();rit++)
    {
        cout<<*rit<<" ";
    }
    cout<<"\n";
    d1.push_back(2);
    d1.push_back(3);
    d1.push_back(1);
    d1.push_back(4);
    d1.push_back(5);
    d1.pop_front();
    d1.pop_back();
    d1.erase(d1.begin());
    for(deque<int>::iterator it=d1.begin();it!=d1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
    d1.clear();
    cout<<d1.size()<<endl;
}
