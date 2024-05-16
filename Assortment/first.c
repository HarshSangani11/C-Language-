#include<stdio.h>
main(){
    int a;
    printf("Enter Array size:");
    scanf("%d",&a);
    int array[a];
    for(int i=0;i<a;i++){
        printf("Enter element %d:",i);
        scanf("%d",&array[i]);
    }
    for(int i=0;i<a;i++){
        if(array[i]<0){
            printf("Negative Elements:%d\n",array[i]);
        }
        
    }
}