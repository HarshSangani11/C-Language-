#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter A Value:");
    scanf("%d",&a);
     b = a;
    while (b >= 10){
        b /= 10;
    }
     c = a % 10;
     d = b+c;
    printf("Sum of the First and Last digits:%d\n",d);
    return 0;
}