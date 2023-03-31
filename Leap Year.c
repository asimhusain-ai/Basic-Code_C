#include<stdio.h>
int main(){
   int year;
   printf("Enter The Year");
   scanf("%d",&year);

   if(year%4==0 || (year%4==0 && year%100!=4)){
      printf("Leap Year");
   }
   else{
      printf("Not a leap year ");
   }
  return 0;
}