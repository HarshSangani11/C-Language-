#include<stdio.h>
main(){
    int array[]={1,2,3,4};
    int *p[1];
    for(int i=0; i<=3; i++){
        p[i]=&array[i];
        printf("%u %d\n",p[i],*p[i]);
    }
    

}