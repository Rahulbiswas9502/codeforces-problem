#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m,sum,num;
        cin>>h>>m;
        sum=(23-h)*60;
        num=(60-m)+sum;
        cout<<num<<endl;

    }
}
