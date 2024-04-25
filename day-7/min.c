#include<stdio.h>
main(){
    int x,y,z;
    printf("Enter Value of X:");
    scanf("%d",&x);

    printf("Enter Value of Y:");
    scanf("%d",&y);

    printf("Enter Value of Z:");
    scanf("%d",&z);

    if(x < y){
        if(x < z){
            printf("X is Minimum");
        }
        else{
            printf("Z is Minimum");
        }
    }
    else{
        if(y < z){
            printf("Y is Minimum");
        }
        else{
            printf("Z is Minimum");
        }
    }
}