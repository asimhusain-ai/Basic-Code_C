#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, r1, r2;
    printf("Enter The Value OF a b c\n");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;
    if (d == 0)
    {
        r1 = -b / ( 2 * a);
        r2 = -b / ( 2 * a);
        printf("The Rotts Of A:   %.2f%%\nThe Roots Of B:  %.2f%% ", r1, r2);
    }
    else if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("The Rotts Of A:  %.2f%%\nThe Roots Of B:  %.2f%% ", r1, r2);
    }
    else
    {
        printf("Roots Are Imaginary ");
    }
    return 0;
}