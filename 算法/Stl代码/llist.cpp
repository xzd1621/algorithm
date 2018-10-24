#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    list <int>l;
    l.push_back(2);
    l.push_back(3);
    l.push_back(1);
    l.push_back(4);
    l.push_back(6);
    list<int>::iterator it;

    //链表的迭代器只能用++或--，不能+n，这一点不同于vector
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
    //反向遍历

    list<int>::reverse_iterator rit;
    for(rit=l.rbegin();rit!=l.rend();rit++)
    {
        cout<<*rit<<" ";
    }
    cout<<"\n";

    //remove方法移除所有值相同的元素
    l.push_back(3);
    l.remove(3);
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";

    //pop_front()删除链表首元素，pop_back()删除链表尾元素

    l.push_back(9);
    l.pop_back();
    l.pop_front();

    //删除第2个元素，erase方法删除迭代器位置上的元素
    list<int>::iterator it1=l.begin();
    it1++;
    l.erase(it1);
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";

    list<int>::iterator it2;
    it2=find(l.begin(),l.end(),6);
    if(it2!=l.end())
        cout<<"find it\n";
    else
        cout<<"not find it\n";

    //对链表进行升序排列
    l.push_back(3);
    l.sort();
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //l,unique()剔除连续重复元素，只保留一个
    l.push_back(6);
    l.unique();
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //l.clear();
    //cout<<l.size()<<endl;
    return 0;
}
