#include <iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
//int main()
//{
//    vector <int >v;
//    for (int i=0;i<10;i++)
//    {
//        v.push_back(i);
//    }
//    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
//        cout<<*it<<" ";
//    cout<<"\n";
//    cout<<accumulate(v.begin(),v.end(),0)<<"\n";
//    //return 0;
//}
//int main()
//{
//
//    vector <int>v(3);
//    v[0]=2;
//    v[1]=7;
//    v[2]=9;
//    v.insert(v.begin(),3);
//    v.insert(v.begin()+2,1);
//    v.insert(v.end(),8);
//    vector <int>::iterator it;
//    v.erase(v.begin()+1,v.begin()+2);
//    reverse(v.begin(),v.end());
//    for(it=v.begin();it!=v.end();it++)
//    {
//        cout<<*it<<"\n";
//    }
//    v.clear();
//    cout<<v.size();
//    cout<<v.empty();
//}
int main()
{

    vector <int>v(10);
    for(int i=0;i<10;i++)
    {
        v[i]=i;
    }
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
    reverse(v.begin(),v.end());
     for(vector<int> ::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    sort(v.begin(),v.end());
     for(vector<int> ::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<v.size();
}
