#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,num=0;
    cin>>n;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>0)
        {
            num=num+a;
        }
        else{
            if(num>0)
            {
                --num;
            }
            else{
                ++sum;
            }
        }
    }

    cout<<sum<<endl;
}
