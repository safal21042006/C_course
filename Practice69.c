// PROGRAM TO PRINT THE FIBNOACCI SERIES
#include<stdio.h>
int fib(int n);

int main(){
    printf("fib   is: %d ",fib(5));
    return 0;
}

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibNM1=fib(n-1);
    int fibNM2=fib(n-2);
    int fibn=fibNM1+fibNM2;
     
     
}

