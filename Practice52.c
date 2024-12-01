// PROGRAM TO PRINT THE FACTORIAL
#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact * i;
    }
    printf("%d",fact);

return 0;
}