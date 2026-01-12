#include <stdio.h>

/* Function to check Prime Number */
int isPrime(int n) {
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

/* Function to find Factorial */
int factorial(int n) {
    int i, fact = 1;

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

/* Function to swap numbers using pass by reference */
void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int num, a, b;

    /* Prime Check */
    printf("Enter a number to check prime: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime number\n\n", num);
    else
        printf("%d is NOT a Prime number\n\n", num);

    /* Factorial */
    printf("Enter a number to find factorial: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d\n\n", num, factorial(num));

    /* Swap using pass by reference */
    printf("Enter two numbers to swap:\n");
    scanf("%d %d", &a, &b);

    printf("Before Swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After Swapping:  a = %d, b = %d\n", a, b);

    return 0;
}
