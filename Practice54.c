// PROGRAM TO CALCULATE THE SUM OF ALL NUMBERS BETWEEN 5 AND 50

#include<stdio.h>
int main(){
    int sum=0;
    for(int i=5;i<=50;i++){
    sum+=i;    
    }
    printf("FINAL SUM:%d",sum);
    return 0;
}