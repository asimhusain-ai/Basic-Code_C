
#include<stdio.h>
int main(){
    char ch;
    printf("Enter Character ");
    scanf("%c", &ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("Alphabet", ch);
    }
    else if(ch>='0' && ch<='9'){
        printf("Digit", ch);
    }
    else{
        printf("Special Character ");
    }
  return 0;
}