#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,num;
        cin>>a>>b;
        num=b-a;
        if(num>=2)
        {
            sum++;
        }
    }
    cout<<sum<<endl;
}
