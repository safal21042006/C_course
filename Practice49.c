// KEEP TAKING INPUT FROM USER UNTIL USER ENTER UNTIL IT IS DIVISBLE BY 7

#include<stdio.h>
int main(){
    int n;
    do{
        printf("ENTER NUMBER:");
        scanf("%d",&n);
        printf("%d \n",n);
        if(n % 7 ==0){
            break;
            
        }
    }
    while(1);
    printf("THANK YOU");
    return 0;
}