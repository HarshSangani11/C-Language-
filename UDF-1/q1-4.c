#include<stdio.h>

calculateCube(int a){
    int d= a * a * a;
    printf("%d",d);
}

void main(){
     int a;
    printf("Enter the first number: ");
    scanf("%d", &a);

printf("Cube =");
calculateCube(a);
}