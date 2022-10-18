#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       long long a,b,c,sum=0,num=0,x,y,z;
       cin>>a>>b>>c;
       x=abs(b-c)+abs(c-1);
       y=abs(a-1);
       if(x<y)
       {
           cout<<"2\n";
       }
       else if(y<x)
       {
           cout<<"1\n";
       }
       else{
         cout<<"3\n";
       }
   }

}
