#include <stdio.h>


int sum(int arr[], int size) {
    int c = 0;
    for (int i = 0; i < size; i++) {
        c += arr[i];
    }
    return c;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];


  
    for (int i = 0; i < size; i++) {
        printf("Enter elements %d:", i);
        scanf("%d", &array[i]);
    }

 
    printf("Sum of array elements: %d\n", sum(array, size));

    return 0;
}
