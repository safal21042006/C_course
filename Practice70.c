// HOME WORK PROBLEM 
// 1- WRITE A FUNCTION TO FIND SUM OF A NUMBER 

// #include<stdio.h>
// void sum(int a,int b);

// int main(){
//     int a,b;
//     printf("ENTER THE DIGITS VALUE");
//     scanf("%d%d",&a,&b);
//     sum(a,b);
// }

// void sum(int a,int b){
//     int sum=a+b;
//     printf("SUM IS %d",sum);
// }

// 2- WRITE A FUNCTION  TO FIND SQUARE ROOT OF A NUMBER 
// WRONF CHECK AGAIN
#include<stdio.h>
#include<math.h>
void sqrt(int n);
int main(){
    int n;
    printf("ENTER THE NUMBER");
    scanf("%d",n);
    sqrt(n);
}
float sqrt(int n){
    float squareroot=sqrt(n);
    printf("SQUARE ROOT IS %f",squareroot);
}