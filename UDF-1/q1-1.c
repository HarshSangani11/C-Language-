#include<stdio.h>

addNumbers(int a,int b){
    int d= a + b;
    printf("%d",d);
}

void main(){
     int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);
printf("Sum =");
addNumbers(a,b);
}