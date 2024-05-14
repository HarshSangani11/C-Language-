#include<stdio.h>
main(){
    int array[5],sum=0;
    for(int i=0;i<=4;i++){
        printf("Enter value %d:",i);
        scanf("%d",&array[i]);
         sum=sum +array[i];
    }
    printf("Sum of Given Element:%d",sum);
   
}