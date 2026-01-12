#include <stdio.h>

int main() {

    int arr[10][10];
    int rows, cols;
    int i, j, sum = 0;

    /* Input rows and columns */
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    /* 2D Array Input */
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    /* 2D Array Output */
    printf("\nMatrix elements are:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    /* Sum of elements */
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum = sum + arr[i][j];
        }
    }

    printf("\nSum of all elements = %d\n", sum);

    return 0;
}
