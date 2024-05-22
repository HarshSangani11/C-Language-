#include <stdio.h>

void divideNumbers(int a, int b) {
    if (b == 0) {
        printf("Error: Cannot divide by zero\n");
    } else {
        float result = (float)a / b;
        printf("Result of division: %d\n", result);
    }
}

void main() {
    int a, b;
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    divideNumbers(a, b);
    
}
