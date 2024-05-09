#include<stdio.h>
main(){
    for(int i=5; i>=1;i--){
        for(int a=1;a<=i;a++){
            printf(" ");
        }
        for(int j=i;j<=5;j++){
            
            printf("%d",j);
        }
        printf("\n");
    }
}