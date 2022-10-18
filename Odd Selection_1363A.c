#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int num,n,x,even=0,odd=0;
        scanf("%d %d",&n,&x);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&num);
            if(num%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }

        }
        if(odd==0||(x%2==0 && even==0)||(n==x && odd%2==0))
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        --t;

    }

}
