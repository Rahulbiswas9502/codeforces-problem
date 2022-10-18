#include<stdio.h>

int main()
{
    int t,l=0;
    scanf("%d",&t);
    char arr[t];

    scanf("%s",&arr);

    for(int i=0;i<t;i++)
    {
        if(arr[i]==arr[i+1])
        {
            l++;
        }
    }
    printf("%d",l);



    return 0;

}
