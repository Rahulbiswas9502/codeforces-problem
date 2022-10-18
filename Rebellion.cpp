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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int i=0;
        int j=n-1;
        int sum=0;
        while(i<j)
        {
            if(a[j]==1)
            {
                j--;
            }
            else if(a[i]==1 && a[j]==0)
            {
                sum++;
                i++;
                j--;
            }
            else if(a[i]==1 && a[j]==1)
            {
                i++;
                j--;
            }
            else  if(a[i]==0 && a[j]==1)
            {
                i++;
            }
            else{
                i++;
            }
        }
        cout<<sum<<endl;
    }
}
