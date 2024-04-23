#include<stdio.h>
main() {
    int a,b;
    printf("Enter First Value:");
    scanf("%d",&a);
    printf("Enter Second Value:");
    scanf("%d",&b);
    if(a<b){
        printf("A is minimum");
    }
    else{
        printf("B is minimum");
    }
}