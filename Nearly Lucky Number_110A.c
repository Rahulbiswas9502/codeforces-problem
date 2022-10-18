#include<stdio.h>
#include<string.h>
int main()
{
    long long int z=0,num,a,i,sum,rem;
    scanf("%lld",&a);
    while(a>0)
    {
        rem=a%10;
        if(rem==4 ||rem==7){
            z++;
        }
        a=a/10;
    }

    if(z==4 ||z==7){
        printf("YES");
    }
    else{
        printf("NO");
    }





    return 0;
}
