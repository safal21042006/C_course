// PROGRAM OF FUNCTION TO CONVERT CELCIUS TO FAHRENEIT

#include<stdio.h>
void changeDTF(int n);

int main(){
    int n;
    printf("ENTER THE NUMBER of DEGREE CELCIUS n:");
    scanf("%d",&n);
    changeDTF(n);
}

void changeDTF(int n){

float Fahr=((9.0/5.0)*n+32);
printf("DEGREE FEHRENEIT IS: %f",Fahr);
}
