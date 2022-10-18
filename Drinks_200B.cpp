#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    double num,sum;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        sum=sum+p;
    }
    num=sum/n;
    std::cout << std::fixed;
    std::cout << std::setprecision(12);
    std::cout << num;
    //printf("%f",num);
}
