#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=1;
    cin>>n;
    int a[n],b[n-1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<n;
    }
    else{
        for(int i=0;i<n-1;i++)
        {
        if(a[i]<=a[i+1])
        {
            x++;
        }
        else{
            x=1;
        }
        b[i]=x;
        }
    sort(b,b+n-1);

    cout<<b[n-2]<<endl;
    }

}
