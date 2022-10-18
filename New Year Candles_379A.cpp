#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0,x,m;
    cin>>a>>b;
    sum=a;

    while(a>=b)
    {
        x=a/b;
        sum=sum+x;
        m=a%b;
        a=x+m;
    }
    cout<<sum<<endl;
}
