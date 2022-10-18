#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,sum=0;
    long long int a[3];
    cin>>t;
    while(t--)
    {

        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]+a[1] == a[2])
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;

}
