// ARRAYS

#include<stdio.h>
int main(){
    int marks[3];
    printf("Enter physics marks");
    scanf("%d",&marks[0]);
    printf("Enter chemistry marks");
    scanf("%d",&marks[1]);
    printf("Enter math marks");
    scanf("%d",&marks[2]);
    printf("Physics marks is :%d \n chemistry marks is %d \n math marks is %d",marks[0],marks[1],marks[2]);
}