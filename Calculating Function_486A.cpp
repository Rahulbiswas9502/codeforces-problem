#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int n,i,j,k,sum=0;
    cin>>n;
    if(n%2==0)
    {
        sum=n/2;
        cout<<sum<<endl;
    }
    else{
        sum=(n+1)/2 *(-1);
        cout<<sum<<endl;
    }



}
