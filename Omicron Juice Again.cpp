#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c,d,sum,num,x,y,z;
        cin>>a>>b>>c>>d;
        sum=a+b+c;
        num=sum/3;
        x=num-a;y=num-b;z=num-c;

        if(sum%3==0)
        {
            if(x%d==0 && y%d==0 && z%d==0 )
            {
                cout<<"Case "<<i+1<<": Peaceful"<<endl;
            }
            else{
                cout<<"Case "<<i+1<<": Fight"<<endl;
            }
        }
        else{
            cout<<"Case "<<i+1<<": Fight"<<endl;
        }


    }
    return 0;
}

