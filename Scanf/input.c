#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter a numbers: ");
    scanf("%d", &a);
    printf("Enter another numbers: ");
    scanf("%d", &b);

    printf(" the valu of this number %d %d\n", a + b);
    printf(" the valu of this number %d %d\n", a - b);
    printf(" the valu of this number %d %d\n", a * b);
    printf(" the valu of this number %d %d\n", a / b);

    float c, d;

    printf("Enter a float numbers: ");
    scanf("%f", &c);
    printf("Enter another float numbers: ");
    scanf("%f", &d);

    printf(" the valu of this number %f %f\n", c + d);
    printf(" the valu of this number %f %f\n", c - d);
    printf(" the valu of this number %f %f\n", c * d);
    printf(" the valu of this number %f %f\n", c / d);

    char e, f;

    printf("Enter a char: ");
    scanf("%c \n", &e);
    printf("Enter another char: ");
    scanf("%c \n", &f);

    printf(" the valu of this number %c %c\n", e, f);

    return 0;
}

/**
 * @input A : Integer array 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */