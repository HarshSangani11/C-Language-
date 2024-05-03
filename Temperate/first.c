#include<stdio.h>
int main(){
    int a=1;
    do{
        if(a % 2==0){
        printf("%d\n",a);
          a+=7;
    }
  
    else{
        a++;
    }
    }while(a<=50);
    return 0;
}