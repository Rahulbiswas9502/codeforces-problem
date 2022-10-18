#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,sum=0,num;
    cin>>n>>t;
    num=240-t;
    for(int i=1;i<=n;i++)
    {
        num=num-(5*i);
        if(num>=0)
        {
            sum++;
        }

    }
    cout<<sum<<endl;
}
