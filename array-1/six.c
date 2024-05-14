#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    
    
    for (int i = 0; i < size; i++) {
        printf("Enter element %d:",i);
        scanf("%d", &arr[i]);
    }

   
    int largest = arr[0];

   
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
