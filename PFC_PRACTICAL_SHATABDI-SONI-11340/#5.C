#include <stdio.h>

int main() {

    int num;

    /* 1. Odd / Even using if-else */
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even\n\n", num);
    else
        printf("%d is Odd\n\n", num);

    /* 2. Maximum of Three Numbers using Nested if */
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > c)
            max = a;
        else
            max = c;
    } else {
        if (b > c)
            max = b;
        else
            max = c;
    }

    printf("Maximum number = %d\n\n", max);

    /* 3. Ternary Operator */
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    max = (x > y) ? x : y;

    printf
