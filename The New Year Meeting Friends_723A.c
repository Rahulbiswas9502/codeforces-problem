#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c;
    int x,i,j,k,y;
    scanf("%d %d %d",&a,&b,&c);

    if(a>b &&a>c){
        i=a;
    }
    else if(b>a&&b>c){
        i=b;
    }
    else if(c>a&&c>b){
        i=c;
    }
    if(a<b &&a<c){
        j=a;
    }
    else if(b<a&&b<c){
        j=b;
    }
    else if(c<a&&c<b){
        j=c;
    }
    else{
        i=j;
    }
    printf("%d",i-j);



}


