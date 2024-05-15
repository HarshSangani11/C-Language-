#include <stdio.h>

int main() {
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows and columns of the 2D array: ");
    scanf("%d %d", &rows, &cols);

    // Declare the 2D array with the given dimensions
    int arr[rows][cols];

    // Input array elements from the user
    printf("Enter the elements of the %d x %d array:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate the sum of elements along the main diagonal and anti-diagonal row-wise
    for (int i = 0; i < rows; i++) {
        int main_diag_sum = 0;
        int anti_diag_sum = 0;

        for (int j = 0; j < cols; j++) {
            if (j == i)
                main_diag_sum += arr[i][j];
            if (j == cols - 1 - i)
                anti_diag_sum += arr[i][j];
        }

        // Print the sum of elements along the main diagonal and anti-diagonal for each row
        printf("Row %d: Main diagonal sum = %d, Anti-diagonal sum = %d\n", i + 1, main_diag_sum, anti_diag_sum);
    }

    return 0;
}
