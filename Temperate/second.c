#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a Number:");
    scanf("%d",&a);
    while( a !=0){
        a /=10;
        b++;
    }
    printf("Total number of Digit:%d",b);
    return 0;
}