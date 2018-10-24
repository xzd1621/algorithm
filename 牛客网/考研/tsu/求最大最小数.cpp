#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[10001],min=1000001,max=-1000001;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>max)
                max=a[i];
            if(a[i]<min)
                min=a[i];
        }
        cout<<max<<" "<<min<<"\n";
    }
}
