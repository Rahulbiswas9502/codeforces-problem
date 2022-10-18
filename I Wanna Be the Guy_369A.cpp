#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,sum=0;
    cin>>n>>p;
    int ar[250];
    for(int i=0;i<p;i++)
    {
        cin>>ar[i];
    }
    cin>>q;
    for(int i=p;i<p+q;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+(p+q));
    for(int i=0;i<p+q;i++)
    {
        if(ar[i]!=ar[i+1])
        {
            sum++;
        }
    }
    if(sum==n)
    {
        cout<<"I become the guy.\n";
    }
    else{
        cout<<"Oh, my keyboard!\n";
    }
    return 0;


}
