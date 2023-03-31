#include<stdio.h>
 
int main(){
    float centigrade,fahrenheit;
    printf("\n Enter the Temparature in Centigrade : ");
    scanf("%f",&centigrade);
 
    fahrenheit = (1.8 * centigrade) + 32;
    printf("\n Temperature in Fahrenheit : %f ",fahrenheit);
 
    return 0;
}