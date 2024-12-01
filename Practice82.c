// STRING 
// CREATE A STRING FIRST NAME AND LAST NAME TO STORE DETAILS OF USER AND PRINT ALL THE CHARACTERS USING A LOOP

#include<stdio.h>
void printstring(char arr[]);
int main(){
    char firstName[]="SAFAL";
    char lastName[]="NIGAM";
    printstring(firstName);
    printf("\n");
     printstring(lastName);
   
    return 0;
}
void printstring(char arr[]){
    for(char i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
}


// STRING 
// CREATE A STRING FIRST NAME AND LAST NAME TO STORE DETAILS OF USER AND PRINT ALL THE CHARACTERS USING A LOOP

#include<stdio.h>
int main(){
    char name[50];
    scanf("%s",name);
    printf(" YOUR NAME AND COLLEGE NAME IS:%s",name);
    return 0;
}