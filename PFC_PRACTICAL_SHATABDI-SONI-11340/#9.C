#include <stdio.h>

int main() {

    int arr[100], n, i, j;
    int key, found = 0, temp;

    /* 1. 1D Array Input */
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* 2. 1D Array Output */
    printf("\nArray elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    /* 3. Linear Search */
    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d\n\n", key, i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Element %d not found\n\n", key);
    }

    /* 4. Bubble Sort */
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array after Bubble Sort (Ascending Order):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
