#include<stdio.h>
main(){
    for(int i=5;i>=1;i--){
        for(int a=1;a<=5;a++){
            printf("");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=2;i<=5;i++){
        for(int a=1;a<=5;a++){
            printf("");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}