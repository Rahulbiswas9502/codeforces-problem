#include<stdio.h>
#include<string.h>
int main()
{
    char arr[101],a,e,i,u,o,y;
    int x;
    scanf("%s",&arr);
    for(x=0;x<strlen(arr);x++)
    {
        arr[x]=tolower(arr[x]);

    }

    for(x=0;x<strlen(arr);x++)
    {
        if(arr[x]!='a' &&arr[x]!='e' &&arr[x]!='i' &&arr[x]!='o' &&arr[x]!='u'&&arr[x]!='y')
        {
            printf(".%c",arr[x]);
        }

    }

    return 0;

}
