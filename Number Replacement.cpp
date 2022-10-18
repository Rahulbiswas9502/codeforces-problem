#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        string brr;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>brr;
        int m=0;
        sort(arr, arr+n);
        for(int j=0;j<n;j++)
        {
            if(arr[j]==arr[j+1])
            {
                m++;
            }

        }
        int sm=0,sn=0;
        for(int j=0;j<n;j++)
        {
            for(int i=1;i<n;i++)
            {
               if(brr[j]==brr[i])
                {
                    sm++;
                }
            }

        }
        if(sm>=m)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
