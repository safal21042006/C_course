// WRITE A FUNCTION THAT PRINTS NAMASTE IF USER IS INDIAN & BONJOUR IF THE USER IS FRENCH
#include<stdio.h>
void namaste();
void french();

int main(){
    printf("ENTER i FOR INDIAN AND f FOR FRENCH");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
        namaste();
    }
    
    else if(ch=='f'){
        french();
    }
    
    
    return 0;
}

void namaste(){
    printf("Namaste");
}

void french(){
    printf("Bonjour");
}

