#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<string, int>database;
    string a;
    while(t--)
    {
        cin>>a;
        if(database.count(a)==0)
        {
            cout<<"OK"<<endl;
            database[a]=1;
        }
        else{
            cout<<a<<database[a]<<endl;
            database[a]+=1;
        }
    }

    return 0;


}

