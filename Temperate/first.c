#include<stdio.h>
int main(){
    int a=1;
    do{
        if(a % 2==0){
        printf("%d\n",a);
    }
    a+=3;
    }while(a<=50);
    return 0;
}