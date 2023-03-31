#include<stdio.h>

int main(){
    int m;
    printf("Enter The Value Of M ");
    scanf("%d", &m);

    if(m>0){
        printf("1\n");
    }
    else if(m==0){
        printf("0\n");
    }
    else{
        printf("-1\n");
    }
    return 0;
}