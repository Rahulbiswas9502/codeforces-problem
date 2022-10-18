#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int n,sum=0,num=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a;
        if(a==1)
        {
           num++;
        }
        else{
            sum++;

        }
    }
    if(num>0)
    {
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
    return 0;

}
