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

    //����ĵ�����ֻ����++��--������+n����һ�㲻ͬ��vector
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
    //�������

    list<int>::reverse_iterator rit;
    for(rit=l.rbegin();rit!=l.rend();rit++)
    {
        cout<<*rit<<" ";
    }
    cout<<"\n";

    //remove�����Ƴ�����ֵ��ͬ��Ԫ��
    l.push_back(3);
    l.remove(3);
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";

    //pop_front()ɾ��������Ԫ�أ�pop_back()ɾ������βԪ��

    l.push_back(9);
    l.pop_back();
    l.pop_front();

    //ɾ����2��Ԫ�أ�erase����ɾ��������λ���ϵ�Ԫ��
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

    //�����������������
    l.push_back(3);
    l.sort();
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //l,unique()�޳������ظ�Ԫ�أ�ֻ����һ��
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
