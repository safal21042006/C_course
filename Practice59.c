// PROGRAM WHICH PRINT THE TABLE OF NUMBER IN FUNCTION

#include<stdio.h>
void printTable(int n);

int main(){
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printTable(n); // ACTUAL ARGUMENT/ PARAMTER 
   
}

void printTable(int n){
for(int i=1;i<=10;i++){ // PARAMETER / FORMAL PARAMETER
    printf("%d \n",i*n);
    
    
    
}
}