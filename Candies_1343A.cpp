#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long  long int a;
        cin>>a;
        for(int i=2;i<10e9;i++)
        {
            int b=pow(2,i) -1;
            if(a%b==0)
            {
                cout<< a/b<<endl;
                break;
            }
        }
    }
}
