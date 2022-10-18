#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,sum=0;
    scanf("%d %d",&a,&b);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&c);
        if(c>b)
        {
            sum+=2;
        }
        else{
            sum+=1;
        }
    }
    printf("%d",sum);
    return 0;
}
