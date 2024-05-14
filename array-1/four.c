#include<stdio.h>
#define size 5
main(){
    int array[size],i;
    for( i=0;i<size;i++){
        printf("Enter number %d:",i);
        scanf("%d",&array[i]);
      if( i % 2 == 0){
            printf("odd numbers :%d\n",array[i]);
        }  
    }
    
    
    
}