#include<stdio.h>
int *max(int *n1, int *n2){
   if(*n1 < *n2){
    return n2;
   }
   else{
    return n1;
   }
}
void main(){
    int a=99;
    int b=100;
    printf("%d",*max(&a,&b));
}