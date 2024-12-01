// PROGRAM TO CALCULATE THE SQUARE OF A NUMBER BY USER USING LIBRARY FUNCTIONS 
#include<stdio.h>
void square(int n);

int main(){
    int n;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    square(n);
}

void square(int n){
    printf("%d",n*n);
}