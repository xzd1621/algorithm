#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
//    string s="1213456";
//    string::iterator it=s.begin();
//
//    s.erase(it+3);
//    cout<<s<<"\n";
//    s.erase(it,it+4);
//    cout<<s<<"\n";
//    s.append("t");
//    s.insert(it+3,'r');
//    cout<<s.length()<<"\n";
//    s.clear();
//    cout<<s.length()<<" "<<s.empty()<<endl;
    string s="cat dog cat";
    cout<<s.find('c')<<endl;
    cout<<s.find("cat")<<endl;
    cout<<s.find("my")<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<"\n";
    vector<string>v;
    v.push_back("fsddg");
    v.push_back("nice");
    v.push_back("dog");
    cout<<v[0]<<"\n";
    cout<<v[1][1]<<"\n";
    cout<<v[2].length();
}
