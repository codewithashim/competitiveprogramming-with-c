#include <stdio.h>

int main()
{

    float num1, num2, result;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    result = num1 + num2;
    printf("The sum of %.2f and %.2f is %.2f\n", num1, num2, result);
    
    result = num1 - num2;
   printf("The difference of %.2f and %2.f is %2.f\n", num1, num2, result);
    
    result = num1 * num2;
   printf("The Multiply of %.2f and %.2f is %2.f\n", num1, num2, result);

    result = num1 / num2;
    printf("the devestion of %.2f and %.2f is %.2f\n", num1, num2, result);

    return 0;
}

// prject planing
// var num1 num2
// var result
// take input from user
// add
// subtract
// multiply
// divide
// modulus
// square
// square root
// cube
// cube root
// power
// factorial
// log
// sin

// number planing
// 10+25=35
// 10-25=35
// 10*25=35
// 10/25=35
