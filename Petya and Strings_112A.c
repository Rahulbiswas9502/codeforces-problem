#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,x;
    scanf("%s%s",a,b);
    for(i=0;i<strlen(a);i++)
    {
        a[i]=towlower(a[i]);
        b[i]=towlower(b[i]);
    }
    for(i=0;i<strlen(a);i++){
        if(a[i]>b[i]){
            x=1;
            break;
        }
        else if(a[i]<b[i])
        {
            x=-1;
            break;
        }
        else if(a[i]==b[i])
        {
            x=0;
            continue;
        }



    }


    printf("%d",x);
    return 0;
}
