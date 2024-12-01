// KEEP TAKING INPUT FROM USER UNTIL USER ENTER AN ODD NUMBER

#include<stdio.h>
int main(){
    int n;
    do{
        printf("ENTER NUMBER:");
        scanf("%d",&n);
        printf("%d \n",n);
        if(n%2!=0){
        break;
        }
        
    }
    while(1);
    printf("THANK YOU");
    return 0;
}