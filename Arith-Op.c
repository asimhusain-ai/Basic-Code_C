#include <stdio.h>

int main()
{
    int a;
    printf("Enter First Num To Operate ");
    scanf("%d", &a);

    int b;
    printf("Enter Second Num To Operate ");
    scanf("%d", &b);

    printf("After Addition %d\n", (a + b));
    printf("After Subtraction %d\n", (a - b));
    printf("After Multiplication %d\n", (a * b));
    printf("After Dividing %d\n", (a / b));

    return 0;
}