#include<stdio.h>

calculateSquare(int a){
    int d= a * a;
    printf("%d",d);
}

void main(){
     int a;
    printf("Enter the first number: ");
    scanf("%d", &a);

printf("SQUARE =");
calculateSquare(a);
}