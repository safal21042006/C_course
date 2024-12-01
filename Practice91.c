// CREATE A STRUCTURE TO STORE COMPLEX NUMBERS USING ARROW 
#include<stdio.h>
struct complex{
    int real;
    int img;
};
int main(){
    struct complex number1={5,9};
    struct complex *ptr=&number1;
    printf("real part = %d\n",ptr->real);
     printf("img part = %d\n",ptr->img);
     return 0;
}

//Make a structure to store bank account information of a customer of ABC Bank.Also make an alias for it
#include<stdio.h>
#include<string.h>
typedef struct BankAccountinformation{
    char name[100];
    int accountno;
}BAI;
int main(){
     BAI s1;
    strcpy(s1.name,"SAFAL");
    s1.accountno=2237477;
    printf("ACCOUNT HOLDER:%s \n",s1.name);
    printf("ACCOUNT NUMBER:%d \n",s1.accountno);
    
}