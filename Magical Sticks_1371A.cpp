#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        sum=n/2;
        if(n%2==1)
        {
            sum++;
        }
        cout<<sum<<endl;
    }
}
