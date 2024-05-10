#include<stdio.h>
main(){
    int a;
    printf("Enter A Number:");
    scanf("%d",&a);
    (a % 2 ==0) ? printf("A is Even") : printf("A is Odd");
}