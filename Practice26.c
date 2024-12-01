// PROGRAM OF IF ELSE STATEMENT 

#include <stdio.h>

int main() {
 int numbers;
 printf("ENTER NUMBERS");
 scanf("%d",&numbers);
 
 if(numbers>90){
     printf("A++");
 }else if( 60<numbers<90){
     printf("A");
 }else if(33<numbers<60){
     printf("B");
    } else{
         printf("STUDENTS IS FAILED");
     }
 
     return 0;
 }