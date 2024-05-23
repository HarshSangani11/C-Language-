#include <stdio.h>

int factorial(int n) {
  
    if (n == 0) {
        return 1;
    }
  
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    printf("Enter a positive integer:");
    scanf("%d", &num);


    if (num < 0) {
        printf("Entered Number is negative.");
    } else {
        int fact = factorial(num);
        printf("Factorial of %d is: %d", num, fact);
    }

    return 0;
}
