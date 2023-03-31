#include<stdio.h>

int main(){
    int min,hrs;
    printf("Enter Minutes:- ");
    scanf("%d", &min);
    hrs=min/60;
    printf("Hours:- %d\n", hrs);
    min=min%60;
    printf("Minutes:- %d", min);

    return 0;
}