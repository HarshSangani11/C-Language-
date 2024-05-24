#include<stdio.h>

int calculateArea(int a,int b){
     return a*b;
}

int main(){
     int a,b;
    printf("Enter the width: ");
    scanf("%d", &a);
    printf("Enter the length: ");
    scanf("%d", &b);
    int area = calculateArea(a,b);

printf("Area of a Rectangle is: %d",area);
return 0;
}