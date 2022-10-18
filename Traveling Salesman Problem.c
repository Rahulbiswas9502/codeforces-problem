#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int a,sum=0;
        int i,j,x=0,y=0;
        scanf("%d",&a);
        while(a>0)
        {
            scanf("%d %d",&i,&j);
            i=abs(i);
            j=abs(j);
            x=i-x;
            y=j-y;
            x=abs(x);
            y=abs(y);
           // printf("%d %d\n",x,y);
            sum+=(x*2)+(y*2);
            x=i;
            y=j;

            --a;
        }
        printf("%d\n",sum);

        --t;
    }

    return 0;
}
