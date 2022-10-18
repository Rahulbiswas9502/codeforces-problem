#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum,num,x,y,z,bil;
    cin>>n;
    sum=n%100;num=sum%20;x=num%10;y=x%5;z=y%1;
    bil=(n/100)+(sum/20)+(num/10)+(x/5)+(y/1);
    cout<<bil<<endl;
}
