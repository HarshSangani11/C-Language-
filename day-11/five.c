#include<stdio.h>
int main(){
    int sum=0;
    for(int i=1; i<=10; i++){
        sum+= i;
        if(sum >50){
            sum -= i;
            break;
        }
    }
        printf("sum of first ten integers:%d\n",sum);
    
}