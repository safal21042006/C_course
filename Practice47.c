// PROGRAM TO PRINT THE TABLE OF 2

#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER:");
    scanf("%d",&n);
   
    for(int i=1;i<=10;i++){
    printf("%d \n",n*i);
    }
    return 0;
}