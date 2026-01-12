#include <stdio.h>

int main() {

    int i, n, sum = 0;

    /* 1. Print numbers from 1 to 10 using loop */
    printf("Numbers from 1 to 10:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    /* 2. Sum of N numbers */
    printf("Enter value of N: ");
    scanf("%d", &n);

    sum = 0;
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of first %d numbers = %d\n\n", n, sum);

    /* 3. Use of break */
    printf("Using break (stop loop at 5):\n");
    for (i = 1; i <= 10; i++) {
        if (i == 6)
            break;
        printf("%d ", i);
    }
    printf("\n\n");

    /* 4. Use of continue */
    printf("Using continue (skip 5):\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5)
            continue;
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
