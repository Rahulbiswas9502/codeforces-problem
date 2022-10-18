#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         long long int n,x=0;
        cin>>n;
        if(n%2)
        {
            cout<<"YES\n";
            continue;
        }
        while(n%2==0)
        {
            n=n/2;
        }
        if(n>1)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}
