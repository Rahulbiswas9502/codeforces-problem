#include<stdio.h>
int main()
{
    int i,n,rem,a;
    scanf("%d",&n);
    if(n%4==0 || n%7==0 ||n%44==0 ||n%47==0 ||n%77==0 ||n%74==0 ){
        printf("YES");
        return 0;
    }
    else if(n%444==0 || n%447==0 || n%477==0 || n%474==0){
       printf("YES");
       return 0;
    }

    else{

        while(n>0)
        {
            rem=n%10;
            if(rem==4||rem==7){
                n=n/10;
                if(n<0){
                    printf("YES");
                    break;
                }
                else{
                    continue;
                }

            }
            else
            {
                printf("NO");
                break;
            }
        }

    }




    return 0;
}

