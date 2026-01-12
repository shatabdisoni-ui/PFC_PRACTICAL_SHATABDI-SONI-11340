#include <stdio.h>

/* Function that RETURNS square */
int square(int x) {
    return x * x;
}

/* Pass by VALUE */
void passByValue(int a) {
    a = a + 10;
    printf("Inside passByValue: a = %d\n", a);
}

/* Pass by REFERENCE */
void passByReference(int *a) {
    *a = *a + 10;
    printf("Inside passByReference: a = %d\n", *a);
}

int main() {

    int i, j;

    /* 1. Star Pattern */
    printf("Star Pattern:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    /* 2. Number Pattern */
    printf("Number Pattern:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n");

    /* 3. Function Returning Square */
    int num = 5;
    int result;

    result = square(num);
    printf("Square of %d = %d\n\n", num, result);

    /* 4. Pass by Value */
    int a = 10;
    printf("Before passByValue: a = %d\n", a);
    passByValue(a);
    printf("After passByValue: a = %d\n\n", a);

    /* 5. Pass by Reference */
    printf("Before passByReference: a = %d\n", a);
    passByReference(&a);
    printf("After passByReference: a = %d\n\n", a);

    /* 6. return vs printf */
    printf("Difference between return and printf:\n");
    printf("- printf displays output\n");
    printf("- return sends value back to function caller\n");

    return 0;
}
