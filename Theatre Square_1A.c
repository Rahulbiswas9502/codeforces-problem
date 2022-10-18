#include<stdio.h>
int main(){
    long long int n,m,a,sum,x,y;
    scanf("%lld%lld%lld",&n,&m,&a);
    if(n%a==0)
    {
        x=n/a;
    }
    else{
        x=n/a+1;
    }
    if(m%a==0){
        y=m/a;
    }
    else{
        y=m/a+1;
    }

    sum=(x)*(y);
    printf("%lld",sum);


    return 0;
}
