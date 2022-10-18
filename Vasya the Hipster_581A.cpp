#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum;
    cin>>a>>b;
    sum=abs(max(a,b) -(min(a,b)));
    if(sum<2)
    {
        sum=0;
    }
    cout<<min(a,b)<<" "<<sum/2;

}
