// PROGRAM TO WRITE A FUNCTION TO CALCULATE PERCENTAGE OF A STUDENT FROM MARKS IN SCIENCE,MATH AND SANSKRIT 
// BY MYSELF TRIED
#include<stdio.h>
void calculatePM(int a,int b,int c);

int main(){
    int a,b,c;
    printf("ENTER MARKS IN SCIENCE,MATH AND SANSKRIT");
    scanf("%d%d%d",&a,&b,&c);
    calculatePM(a,b,c);
}
void calculatePM(int a,int b,int c){
    float A=((a/70.0)*100);
    printf("PERCENTAGE IN SCIENCE IS %f",A);
    float B=((b/70.0)*100);
    printf("PERCENTAGE IN MATH IS %f",B);
    float C=((c/70.0)*100);
    printf("PERCENTAGE IN SANSKRIT IS %f",C);
}
// BY SHRADDHA

#include<stdio.h>
int calcPercentage(int SCI,int MATH,int SANS);


int main(){
    int SCI=98;
    int     MATH=99;
       int  SANS=98;
       printf("PERCENTAGE IS %d", calcPercentage(SCI,MATH,SANS));
}
int calcPercentage(int SCI,int MATH,int SANS){
    return((SCI+MATH+SANS)/3);
}
