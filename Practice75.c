// INCREMENT OR DECREMENT IN POINTER 

#include<stdio.h>
int main(){
    int age=22;
    int *ptr=&age;
    printf("age is %u",ptr);
    ptr++;
    printf("age is %u",ptr);
        ptr--;
    printf("age is %u",ptr);
}

