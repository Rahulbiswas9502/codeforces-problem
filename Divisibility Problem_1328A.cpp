#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,sum=0,num;
        cin>>a>>b;
        num=a%b;
        if(num==0)
        {
            cout<<num<<endl;
        }
        else{
            cout<<b-num<<endl;
        }

    }
}
