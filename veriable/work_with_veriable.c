#include <stdio.h>
int main()
{
    // calculate basice mathe useing veriable
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
    int sum2 = num1 - num2;
    int sum3 = num1 * num2;
    int sum4 = num1 / num2;
    int all = sum + sum2 * sum3 - sum4;
    printf("%d \n", all);
    // printf("sum of the velue : %d \n", all);

    int num = 25;
    printf("sum of the velue : %d \n", num + 10);
    printf("mainas of the velue : %d \n", num - 10);
    printf("multiply of the velue : %d \n", num * 10);
    printf("divicon of the velue : %d \n \n", num / 10);

    // few advance calculaction with veriable

    int a = 56;
    int b = 78;

    printf("%d + %d = %d \n", a, b, a + b);
    printf("%d - %d = %d \n", a, b, a - b);
    printf("%d * %d = %d \n", a, b, a * b);
    printf("%d / %d = %d \n", a, b, a / b);

    return 0;

    // fometing palning
    //  56+78=134
    //  56-78=10
    //  56*78=4200
    //  56/78=0.8571428571428571
}