#include<stdio.h>
main(){
    int a=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a++);
        }
        printf("\n");
    }
}