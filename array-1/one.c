#include<stdio.h>
#define size 5
main(){
    int array[size];
    for(int i=0;i<size;i++){
        printf("Enter number %d:",i);
        scanf("%d",&array[i]);
    }
    printf("Length of array :%d",array[size]);
}