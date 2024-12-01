// PROGRAM TO PRINT ALL THE ODD NUMBER FROM 5 TO 50

#include<stdio.h>
int main(){
    for(int i=5;i<=50;i++){
        
        if(i % 2 == 0){
            continue;
        }
                printf("%d \n",i);

    }
    return 0;
    
}