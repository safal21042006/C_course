// PROGRAM TO PRINT ALL NUMBERS FROM 1 TO 10 EXCEPT FOR 6

#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++){
        
        if(i==6){
            continue;
            
        }
        printf("%d \n",i);
    }
    return 0;
}