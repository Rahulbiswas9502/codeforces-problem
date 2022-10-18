#include<stdio.h>
#include<string.h>
int main(){
    int x,y,a,z=0;
    int arr[50];
    scanf("%d%d",&x,&y);
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<x;i++){
        if(arr[i]>=arr[y-1] && arr[i]>0){
            z+=1;
        }
    }

    printf("%d",z);

    return 0;
}
