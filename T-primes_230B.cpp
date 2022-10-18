#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int y, x,sum=0;

        cin>>y;

        x=sqrt(y);
        if(y==1 || x*x!=y)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(int i=2; i*i<=x; i++)
            {
                if(x%i==0)
                {
                    sum++;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(sum==0)
            {
                cout<<"YES"<<endl;
            }


        }



    }
    return 0;
}
