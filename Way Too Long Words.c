#include<stdio.h>
#include<string.h>
int main(){
    char a[101],k;
    int t,x,y,z;
    scanf("%d",&t);
    while(t>0){
        scanf("%s",&a);
        z=0;
        for(int i=0; a[i] != '\0'; i++){
            if(a[i]!=' ')// this condition is used to avoid counting space
        {
                z++;//totChar=totChar+1
        }
    }
        y=z-2;
        if(z<=10){
            printf("%s\n",a);
    }
        else{
            printf("%c%d%c\n",a[0],y,a[y+1]);
    }
        --t;

    }


    return 0;

}

