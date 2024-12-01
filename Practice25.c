// PROGRAM OF CONDITIONAL STATEMENT

#include<stdio.h>
int main() {
    int age;
    printf("ENTER AGE");
    scanf("%d",&age); 
    if (age <18){
        printf("PERSON IS  NOT READY FOR VOTING");
    } else{
        printf("PERSON IS READY FOR VOTING");
    }
    return 0;
}