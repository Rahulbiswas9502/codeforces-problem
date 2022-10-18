#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,n=1,m,sum=0;
    cin>>x>>m;

    for(int i=0;i<m;i++)
    {
        int now;
        cin>>now;
        if(now>=n)
        {
            sum+=now-n;
        }
        else{
            sum+=x-(n-now);
        }
        n=now;
    }
    cout<<sum<<endl;

}
