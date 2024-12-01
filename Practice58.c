// PROGRAM RO TAKE INPUT IN DIFFERENT FORMAT IN FUNCTIONS

#include<stdio.h>
 int sum(int a,int b);
 
 int main(){
     int a,b;
     printf("ENTER THE VALUE OF a");
     scanf("%d",&a);
     printf("ENTER THE VALUE OF b");
     scanf("%d",&b);
     int s = sum(a,b);
     printf("%d",s);
     
     return 0;
 }
 
 int sum(int a,int b){
     return a+b;
 }
 