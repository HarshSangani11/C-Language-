#include<stdio.h>
main(){
    int array[5],sum=0;
    float averg;
    for(int i=0;i<=4;i++){
        printf("Enter value %d:",i);
        scanf("%d",&array[i]);
         sum = (sum + array[i]);
         }
    averg=(float) sum / 5;
    printf("Sum of Given Element:%f",averg);
    return 0;
   
}