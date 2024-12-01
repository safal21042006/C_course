// CHECK WHEATHER THE GIVEN ALPHABET IS UPPERCASE OR NOT
#include<stdio.h>
int main(){
 int ch;
 printf("ENTER CHARACTER:");
 scanf("%c",&ch);
 
 if(ch>='A' && ch<='Z'){
     printf("UPPER CASE");
     }else if(ch>='a' && ch<='z'){
     printf("LOWERCASE");
}else{
    printf("NOT AN ALPHABET");
}
return 0;
}