//PROGRAM TO PRINT HELLO WORLD IN RECURSIVE FUNCTION

#include<stdio.h>

void printHW(int count);

int main(){
    printHW(10);
    return 0;
}

void printHW(int count){
    if(count==0){
        return;
    }
    printf("HELLO WORLD \n");
    printHW(count-1);
}
