#include<stdio.h>
int main(){
    int n;
    printf("Enter Num To Check Positive Num or Negative Num ");
    scanf("%d", &n);

    if(n==0){
        printf("Neither Negative Nor Positive ");
    }
    else if(n<0){
        printf("Negative ");
    }
    else{
        printf("Positive ");
    }

    return 0;
}