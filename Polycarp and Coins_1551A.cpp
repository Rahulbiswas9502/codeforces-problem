#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,y,c1,c2,sum=0;
        cin>>n;
        x=n/3;
        c1=x;c2=x;
        sum=(c1)+(c2*2);
        y=n-sum;
        if(y==0)
        {
            cout<<c1 <<" "<<c2<<endl;
        }
        else if(y==1)
        {
            cout<<c1+1<<" "<<c2<<endl;
        }
        else if(y==2)
        {
            cout<<c1<<" "<<c2+1<<endl;
        }
    }
    return 0;
}
