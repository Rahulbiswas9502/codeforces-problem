#include<stdio.h>
#include<string.h>
int main(){
    int x,a,b,c,sum,d=0;
    scanf("%d",&x);
    while(x>0){
        scanf("%d%d%d",&a,&b,&c);
        sum=a+b+c;
        if(sum>=2){
            d+=1;
        }

        --x;
    }
    printf("%d",d);

    return 0;
}
