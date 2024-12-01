// PROGRAM TO PRINT THE REVERSE OF A TABLE 

#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printf("REVERSE TABLE \n");
    for(int i=10;i>=1;i--){
        
        printf("%d \n",i*n);
    }
    return 0;
}