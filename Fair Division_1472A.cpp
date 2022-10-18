#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,one=0,sum=0,k;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a==1)
            {
                one++;
                sum++;
            }
            else{
                sum+=2;
            }
        }
        if(sum%2==0)
        {
            k=sum/2;
            if(k%2==0)
            {
                cout<<"YES\n";
            }
            else{
                if(one>0)
                {
                    cout<<"YES\n";
                }
                else{
                    cout<<"NO\n";
                }
            }

        }
        else{
            cout<<"NO\n";
        }
    }
}
