#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr;
    cin>>arr;
    int l,n=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>=33 &&arr[i]<=126)
        {
           if(arr[i]=='H' || arr[i]=='Q' || arr[i]=='9')
            {
                n=1;
            }
        }


    }
    if(n==0)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}

