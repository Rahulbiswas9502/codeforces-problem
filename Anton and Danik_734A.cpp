#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    int a=0,d=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='A')
        {
            a++;
        }
        else{
            d++;
        }
    }
    if(a>d)
    {
        cout<<"Anton";
    }
    else if(a==d)
    {
        cout<<"Friendship";

    }
    else if(d>a){
        cout<<"Danik";
    }

}
