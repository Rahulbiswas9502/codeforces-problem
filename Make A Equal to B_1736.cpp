#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,num=0,k,x=0,r;
        cin>>n;
        char arr[n],brr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]=='1')
            {
                sum++;

            }
        }

        for(int i=0;i<n;i++)
        {
            cin>>brr[i];
            if(brr[i]=='1')
            {
                num++;
            }
        }

        k=abs(sum-num)+1;

        for(int i=0;i<n;i++)
        {
            if(arr[i]!=brr[i])
            {
                x++;
            }
        }
        cout<<min(x,k)<<endl;


    }
}
