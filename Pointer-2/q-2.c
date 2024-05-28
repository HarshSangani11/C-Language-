#include<stdio.h>
void *swap(int *n1, int *n2){
    int *t;
    t=n1;
    n1=n2;
    n2=t;
    printf("%d %d",*n1,*n2);
}
void main(){
    int a=99;
    int b=100;
    swap(&a,&b);
}