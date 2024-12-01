// WRITE A PROGRAM TO CHECK IF A STUDENT IS PASSED OR FAILED 
#include<stdio.h>
int main(){
    int n;
    printf("ENTER MARKS:");
    scanf("%d",&n);
    
    if(n>30){
        printf("STUDENT IS PASSED");
    }else{
        printf("STUDENT IS FAILED");
    }
    return 0;
}