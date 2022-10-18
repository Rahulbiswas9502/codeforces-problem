#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0,bi=0,ba=0;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<t;i=i+3)
    {
        c=c+arr[i];
    }
    for(int i=1;i<t;i=i+3)
    {
        bi=bi+arr[i];
    }
    for(int i=2;i<t;i=i+3)
    {
        ba=ba+arr[i];
    }
    if(c>bi && c>ba)
    {
        cout<<"chest"<<endl;
    }
    else if(bi>c && bi>ba)
    {
        cout<<"biceps"<<endl;
    }
    else{
        cout<<"back"<<endl;
    }
}
