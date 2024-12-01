// CHAPTER 9 :STRUCTURES
#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    s1.roll=201;
    s1.cgpa=9.2;
    strcpy(s1.name,"safal");
    printf("%s \n",s1.name);
    printf("%d \n",s1.roll);
    printf("%f \n",s1.cgpa);
    return 0;
}

// WRITE A PROGRAM TO STORE THE DATA OF 3 STUDENTS 

#include<stdio.h>
#include<string.h>
struct studentdata { // user defined
    int roll;
    char name[100];
    float cgpa;
};
int main(){
struct studentdata s1;
s1.roll=1;
s1.cgpa=9.2;
strcpy(s1.name,"SACHIN KUMAR KUSHWAHA");
printf(" Name of student:%s \n",s1.name);
printf("Roll no is :%d \n",s1.roll);
printf("Cgpa is :%f \n", s1.cgpa);
printf("\n");

struct studentdata s2;
s2.roll=2;
s2.cgpa=9.3;
strcpy(s2.name,"SACHIN SHAH");
printf(" Name of student:%s \n",s2.name);
printf("Roll no is :%d \n",s2.roll);
printf("Cgpa is :%f \n", s2.cgpa);
printf("\n");

struct studentdata s3;
s3.roll=3;
s3.cgpa=9.4;
strcpy(s3.name,"SAFAL NIGAM");
printf(" Name of student:%s \n",s3.name);
printf("Roll no is :%d \n",s3.roll);
printf("Cgpa is :%f \n", s3.cgpa);
printf("\n");
return 0;
}

