#include<stdio.h>
int main()
{
    int i,n,t,a[100],b[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=1;j<=n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]==j)
            {
                printf("%d ",i+1);
            }
        }
    }
}

