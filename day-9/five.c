#include<stdio.h>
int main(){
    int i,a;
    printf("Enter First Number:");
    scanf("%d",&i);
    printf("Enter Second Number:");
    scanf("%d",&a);
    while (i <= a)
    {
        printf("%d\n",i);
        i+=4;
    }
    return 0;
    
}