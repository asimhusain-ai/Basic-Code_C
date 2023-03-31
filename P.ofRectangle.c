#include<stdio.h>

int main(){
    int l;
    printf("Enter Lenght ");
    scanf("%d", &l);

    int b;
    printf("Enter Breadth ");
    scanf("%d", &b);

    int p;
    p = 2 * ( l + b );
    printf("The Parameter Of Rectangle is %d", p);

    return 0;
}