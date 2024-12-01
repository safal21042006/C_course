// PROGRAM TO FIND FACTORIAL OF n NUMBER USING RECURSIVE 

#include<stdio.h>
int fact(int n);
int main(){
    printf("FACTORIAL IS %d",fact(12));
}

int fact(int n){
    if(n==0){
        return 1;
    }
    int factNM1=fact(n-1);
    int factn=factNM1*n;
}