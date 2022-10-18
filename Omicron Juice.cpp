#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c,sum,num;
        cin>>a>>b>>c;
        sum=a+b+c;
        if(sum%3==0)
        {
            cout<<"Case "<<i+1<<": Peaceful"<<endl;;
        }
        else{
            cout<<"Case "<<i+1<<": Fight"<<endl;
        }

    }
    return 0;
}
