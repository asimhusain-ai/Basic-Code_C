#include <stdio.h>
 
int main()
{
    int a, b, c;
    printf("Enter three numbers: \n: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a > b && a > c)
       { printf("Biggest number is %d", a);}
    if (b > a && b > c)
        printf("Biggest number is %d", b);
    if (c > a && c > b)
        printf("Biggest number is %d", c);
    return 0;
}