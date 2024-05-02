#include<stdio.h>
main(){
    int a=2,i;
    printf("Enter A Value:");
    scanf("%d",&i);
    do{
        printf("%d\n",a);
        a+=2;
    }while(a<=i);
}     