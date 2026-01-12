#include <stdio.h>
#include <string.h>

int main() {

    char str1[50], str2[50], str3[100];
    int length, result;

    /* String Input */
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    /* strlen() */
    length = strlen(str1);
    printf("\nLength of first string = %d\n", length);

    /* strcpy() */
    strcpy(str3, str1);
    printf("After strcpy, str3 = %s\n", str3);

    /* strcat() */
    strcat(str3, str2);
    printf("After strcat, str3 = %s\n", str3);

    /* strcmp() */
    result = strcmp(str1, str2);

    if (result == 0)
        printf("Both strings are equal\n");
    else if (result > 0)
        printf("First string is greater\n");
    else
        printf("Second string is greater\n");

    return 0;
}
