
// FIND THE SALTED FORM OF A PASSWORD ENTERED BY USER IF THE SALT IS "123"&ADDED AT THE END

// SALT IS THE STRING WHICH IS ADDED IN THE PASSWORD

#include<stdio.h>
#include<string.h>
int main(){
char pass[100];
scanf("%s",pass);
char salt[]="123";
char newpassword[200];
strcpy(newpassword,pass);
strcat(newpassword,salt);

puts(newpassword);
}


// WRITE A FUNCTION NAMED SLICE WHICH TAKES A STRING &RETURNS A SLICED STRING FROM INDEX n to m 
#include<stdio.h>
void slicestr(char str[],int n,int m);
int main(){
    char str[100];
    printf("ENTER THE STRING");
    scanf("%s",str);
    slicestr(str,3,8);
}
void slicestr(char str[],int n,int m){
    char slice[100];
    for(int i=n,j=0;i<=m;i++,j++){
        slice[j]=str[i];
    }
    puts(slice);
   
}
