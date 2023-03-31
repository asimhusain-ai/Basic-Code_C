#include<stdio.h>
int main(){
    int rollno;
    printf("Enter the Roll Number ");
    char name[30];
    float percentage, mark1, mark2, mark3, total;

    scanf("%d", rollno);



    printf("Enter Your Name ");
    scanf("%s", &name);

    printf("Enter the Marks in Three Sunjects ");
    scanf("%f %f %f", &mark1, &mark2, &mark3);

    total=mark1+mark2+mark3;
    percentage=total/3;

    printf("\n");

    printf("Name:- %s\n",name);
    printf("Roll No:- %d\n",rollno);
    printf("Total:- %.2f\n",total);
    printf("Percentage %.2f%%",percentage);
    return 0;
}