#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    
   
    for (int i = 0; i < size; i++) {
        printf("Enter Value %d:",i);
        scanf("%d", &arr[i]);
    }

    int product = 1;

    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            product *= arr[i];
        }
    }

    printf("Product of even numbers in the array: %d\n", product);

    return 0;
}
