#include <stdio.h>

/* Function to swap numbers using pointers */
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {

    /* 1. Variable Declaration */
    int a, b;
    float radius, area;
    char ch;
    double d;
    int *p;

    /* 2. scanf & printf */
    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a character: ");
    scanf(" %c", &ch);   // space avoids newline issue

    printf("Enter a double value: ");
    scanf("%lf", &d);

    printf("\nYou entered:\n");
    printf("Integer = %d\n", a);
    printf("Character = %c\n", ch);
    printf("Double = %lf\n", d);

    /* 3. Area of Circle */
    printf("\nEnter radius of circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    printf("Area of Circle = %.2f\n", area);

    /* 4. Swapping Numbers using Pointers */
    printf("\nEnter two numbers to swap:\n");
    scanf("%d %d", &a, &b);

    printf("Before Swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After Swapping:  a = %d, b = %d\n", a, b);

    /* 5. Pointer Introduction */
    p = &a;

    printf("\nPointer Demonstration:\n");
    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Value using pointer = %d\n", *p);

    return 0;
}
