// PROGRAM TO PASS AN STRUCTURE AS AN ARGUMENT IN FUNCTION
#include<stdio.h>
struct student{
    char name[100] ;
    int roll;
    float cgpa;
    
};
void information(struct student s1);

int main(){
    struct student s1 = {"SAFAL",1662,8.4};
    information(s1);
    s1.roll=1660;
     printf("%d \n",s1.roll);
}
void information(struct student s1){
    printf("%d \n",s1.roll);
    printf("%f \n",s1.cgpa);
    printf("%s \n",s1.name);
    s1.roll=1660;
      
}