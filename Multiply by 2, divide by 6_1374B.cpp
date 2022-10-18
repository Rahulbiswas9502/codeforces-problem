#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,a,b,c,d,sum=0;
        cin>>n;
        while(n%6==0)
        {
            n=n/6;
            sum++;
        }
        while(n%3==0)
        {
            n=n/3;
            sum=sum+2;
        }
        if(n==1)
        {
            cout<<sum<<endl;

        }
        else{
            cout<<"-1"<<endl;
        }


    }
    return 0;
}
