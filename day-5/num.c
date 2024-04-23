#include<stdio.h>
main(){
    int a;
    printf("Enter Value:");
    scanf("%d",&a);
    if(a<0){
        printf("A is Negative");
    }
    else if(a==0){
        printf("A is Neutral");
    }
    else{
        printf("A is Positive");
    }
}