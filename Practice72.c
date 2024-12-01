 // CHAPTER 6
// PRINT THE VALUE OF 'i'FROM ITS POINTER TO POINTER 

#include<stdio.h>
int main(){
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%d \n",**pptr);
    
}