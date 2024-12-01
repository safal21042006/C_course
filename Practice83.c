//ASK THE USER TO ENTER THEIR FIRST NAME AND PRINT IT BACK TO THEM 

#include<stdio.h>
int main(){
    char firstName[40];
    scanf("%s",firstName);
    printf("%s",firstName);// SINCE scanf here cannot take full name it takes only one word after space it doen't print so gets(),puts()come into picture
}


//ASK THE USER TO ENTER THEIR FIRST NAME AND PRINT IT BACK TO THEM 

#include<stdio.h>
int main(){
    char str[100];
    fgets(str,100,stdin);// gets() is invalid in compiler
    puts(str);
    return 0;
}