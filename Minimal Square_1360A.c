#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int a,b,sum;
        scanf("%d %d",&a,&b);
        if(a>b){
            if((b+b)>a){
                sum=(b+b)*(b+b);
            }
            else{
                sum=a*a;
            }
        }
        else{
            if((a+a)>b){
                sum=(a+a)*(a+a);
            }
            else{
                sum=b*b;
            }

        }
        printf("%d\n",sum);

        /*
        for(int i=2;i>1;i++)
        {
            int area;
            area=i*i;
            if(area>=sum)
            {
                printf("%d",area);
                break;
            }
            else{
                continue;
            }
        }
        */
        --t;
    }
    return 0;
}
