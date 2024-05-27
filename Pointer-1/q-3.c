#include <stdio.h>

int main() {
    int intValue = 10;
    float floatValue = 3.14;
    char charValue = 'A';

    int *p1 = &intValue;
    float *p2 = &floatValue;
    char *p3 = &charValue;

    printf("Value of integer using pointer: %d\n", *p1);
    printf("Value of float using pointer: %f\n", *p2);
    printf("Value of character using pointer: %c\n", *p3);

    return 0;
}
