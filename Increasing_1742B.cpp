#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        sort(arr, arr+n);
        for(int i=0 ,j=1; i<n,j<n;i++,j++)
        {
            if(arr[i]==arr[j])

            {
                cout<<"NO\n";
                sum++;
                break;
            }
        }
        if(sum==0)
        {
            cout<<"YES\n";

        }


    }
}
