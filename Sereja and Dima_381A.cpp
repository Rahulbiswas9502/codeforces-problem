#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,x,sum=0,num=0;
    cin>>n;
    x=n-1;
    int arr[x];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int right=x,left=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(arr[left]>=arr[right])
            {
                sum=sum+arr[left];
                left++;

            }
            else{
                sum=sum+arr[right];
                right--;
            }
        }
        else
        {
            if(arr[left]>=arr[right])
            {
                num=num+arr[left];
                left++;
            }
            else{
                num=num+arr[right];
                right--;
            }
        }

    }
    cout<<sum<<" "<<num<<endl;
    return 0;


}

