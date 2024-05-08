#include<stdio.h>
main(){
    for(char i=70;i>=65;i--){
        for(char j=i;j>=65;j--){
            printf("%C ",j);
        }
        printf("\n");
    }
}