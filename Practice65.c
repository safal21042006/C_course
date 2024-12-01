 // PROGRAM TO FIND THE SUM OF n NUMBER
 
 #include<stdio.h>
 int sum(int n);
 
 int main(){
     printf("SUM IS:%d",sum(5));
     
 }
 
 int sum(int n){
     if(n==1){
         return 1;
     }
     int Sumnm1=sum(n-1);
     int sumn=sum(n-1)+n;
 }