#include <stdio.h>

int main() {
    int r, c;

    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);

    int arr[r][c];

    printf("\nEnter array's elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int ch;
    do {
        printf("\nEnter 0 to find sum of row\nEnter 1 to find sum of column\nEnter -1 to exit\n");
        scanf("%d", &ch);

        if (ch == -1)
            break;

        int index;
        printf("Enter %s number: ", ch == 0 ? "row" : "column");
        scanf("%d", &index);

        int sum = 0;

        if (ch == 0) { 
            printf("Elements of row %d: ", index);
            for (int i = 0; i < c; i++) {
                printf("%d", arr[index][i]);
                sum += arr[index][i];
                if (i != c - 1)
                    printf(", ");
            }
            printf("\nThe sum of row %d: %d\n", index, sum);
        } else if (ch == 1) { 
            printf("Elements of column %d: ", index);
            for (int i = 0; i < r; i++) {
                printf("%d", arr[i][index]);
                sum += arr[i][index];
                if (i != r - 1)
                    printf(", ");
            }
            printf("\nThe sum of column %d: %d\n", index, sum);
        } else {
            printf("Invalid choice!\n");
        }
    } while (ch != -1);

    return 0;
}
