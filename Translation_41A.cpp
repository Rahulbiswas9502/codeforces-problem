#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string a,t;
    cin>>a>>t;
    reverse(a.begin(),a.end());
    if(a==t)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
