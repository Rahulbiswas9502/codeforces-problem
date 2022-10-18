#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,w,e,m;
    cin>>n;
    m=n;
    if(n>0)
    {
        cout<<"I hate ";
    }
    for(int i=0;i<m;i++)
    {
        q=n-1;//3
        w=q-1;//2
        e=w-1;//1

        if(q>0)
        {
            cout<<"that "<<"I love ";
            n=n-1;
        }
        if(w>0)
        {
            cout<<"that "<<"I hate ";
            n=n-1;
        }

    }
    cout<<"it"<<endl;
    return 0;


}
