// PROGRAM THAT INPUTS USER NAME AND PRINT ITS LENGTH

#include<stdio.h>
int main(){
    int count=0;
    
    char name[100];
    fgets(name,100,stdin);
    puts(name);
    for(char i=0;name[i]!='\0';i++){
       printf("%c",name[i]);
       count+=1;
    }
    printf("%d",count-1);
    
}