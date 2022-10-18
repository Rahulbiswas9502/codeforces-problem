#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,sum=0;
        cin>>n;
        if(n==1 || n==2)
        {
            cout<<"0"<<endl;
        }
        else if(n>2 && n%2!=0)
        {
            cout<<n/2<<endl;
        }
        else if(n>2 && n%2==0 )
        {
            cout<<(n/2)-1<<endl;
        }
    }
}
