#include <iostream>
using namespace std;
int main()
{
    string s;
    char u;
    int i,j,c=0;
    cin>>s;
    for(int i=1;i<s.size();i++)
    {
        if(islower(s[i]))
        {
            c=1;
        }
    }
    if(c==0)
    {
        for(int i=0;i<s.size();i++)
        {
            if(islower(s[i]))
            {
                u=toupper(s[i]);
            }
            else{
                u=tolower(s[i]);
            }
            cout<<u;
        }
    }
    else{
        cout<<s;
    }
}

