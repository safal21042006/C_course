// CHAPTER5
// FUNCTION IN C
#include<stdio.h>
// DECLARATION/PROTOTYPE
void printHello();


int main(){
    printHello();
    printHello();
    printHello();// FUNCTION CALL
    return 0;
}

void printHello(){
    printf("SAFAL NIGAM \n");// FUNCTION DEFINITION
}
// // WRITE 2 FUNCTIONS - ONE TO PRINT "Hello"&second to print "good bye"
#include<stdio.h>
void printH();

int main(){
    printH();
    printH();
    
    
    
    return 0;
}

void printH(){
    printf("Hello \n");
    printf("good bye \n");
}