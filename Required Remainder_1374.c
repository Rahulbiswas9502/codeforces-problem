#include<stdio.h>
int main()
{
    long long int x,y,n,i,t,k;
    scanf("%lld",&t);


    while(t--){
        scanf("%lld %lld %lld",&x,&y,&n);
        long long int ans=0;
        ans = n - n % x + y;
        if(ans <= n){
            printf("%d\n",ans);
        }
        else{
            printf("%d\n",(n - n % x - (x - y)));
        }
    }
    return 0;

}




