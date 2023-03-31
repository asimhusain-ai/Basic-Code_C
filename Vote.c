#include<stdio.h>
int main(){
    int age;
    printf("Enter The Age Of A Person ");
    scanf("%d", &age);

    if(age>=18){
        printf("Eligible To Vote ! ");
    }
    else{
        printf("Not Eligible To Vote ! ");
    }
    return 0;
}