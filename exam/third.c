#include <stdio.h>

int reverse_number(int num) {
    int reversed_num = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }
    return reversed_num;
}

int main() {
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Invalid input. Please enter a 3-digit number.\n");
        return 1;
    }

    int reversed_num = reverse_number(num);
    printf("Reversed number: %d\n", reversed_num);

    return 0;
}