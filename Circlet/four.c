#include<stdio.h>
main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int a=8;a>=i*2-1;a--){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}