#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    bitset<10>b;
    b[1]=1;
    b[3]=1;
    b[6]=1;
    b[9]=1;
    //第0位最低，第9位最高
    for(int i=b.size()-1;i>=0;i--)
    {
        cout<<b[i];
    }
    cout<<"\n";

    //set()一次性将元素设置为1
    b.set();
    for(int i=b.size()-1;i>=0;i--)
    {
        cout<<b[i];
    }
    cout<<"\n";

    //set(pos)将pos位设置为1
    bitset<10>b1;
    b1.set(6);
    b1.set(3);
    b1.set(8);
    for(int i=b1.size()-1;i>=0;i--)
    {
        cout<<b1[i];
    }
    cout<<"\n";

    //reset(pos)将pos位设置为0
    bitset<10>b2;
    b2.set();
    b2.reset(4);
    b2.reset(2);
    for(int i=b2.size()-1;i>=0;i--)
    {
        cout<<b2[i];
    }
    cout<<"\n";

    //输出流输出所有元素
    cout<<b2<<endl;
}
