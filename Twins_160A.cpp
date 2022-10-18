#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int n,sum=0,num=0;
    cin>>n;
    int str[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&str[i]);
        sum=sum+str[i];

    }
    sum=sum/2;
    sort(str,str+n);
    for (int i = 0; i < n;i++){

        num=num+str[n-i-1];
        if(num>sum)
        {
            cout<<i+1<<endl;
            break;
        }


    }


    //cout<<str<<endl;

}
