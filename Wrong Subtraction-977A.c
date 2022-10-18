#include<stdio.h>
#include<string.h>
int main()
{
    long long int a;
    int k;
    scanf("%lld %d",&a,&k);
    for(int i=0;i<k;i++)
    {
        if(a%10==0)
        {
            a=a/10;
        }
        else{
            a=a-1;
        }
    }
    printf("%lld",a);
    return 0;
}
