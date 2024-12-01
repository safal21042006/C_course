// PROGRAM TO TAKEN THE PRICE BY USER AND ADD 18% TO PRICE
// WRONG 
#include<stdio.h>
void Price(float n);

int main(){
    int n;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    Price(n); 
}

void Price(float n){
  int value=n+(0.18*n);
  printf("%f",value);
   
}


