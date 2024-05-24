#include<stdio.h>

int calculateSumOfSquares(int a){
    int sum = 0;
    
    for (int i = 2; i <= a; i += 2) {
        sum += i * i; 
    }
     return sum;
}
int main(){
    int a;
    printf("Enter a positive integer:");
    scanf("%d",&a);
    int sum = calculateSumOfSquares(a);
     printf("Sum of squares of even numbers from 1 to %d is:%d",a,sum);
    
    return 0;
}
