#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x=0;
    cin>>n;
    int num[100000];
    for(i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(i=0;i<n;i++)
    {
        if(num[i]!=num[i+1])
        {
            x++;
        }
    }
    cout<<x<<endl;

    return 0;

}
