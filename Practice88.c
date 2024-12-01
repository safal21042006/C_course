 // ARRAY USED IN STRUCTURES
 
 #include<stdio.h>
 #include<string.h>
 struct student{
     char name[100];
     int roll;
     float cgpa;
 };
 
 int main() {
 struct student ece[100];
 ece[0].roll=1;
 ece[0].cgpa=8.5;
 strcpy(ece[0].name,"SACHIN K");
 printf("%s \n",ece[0].name);
 printf("%d \n",ece[0].roll);
 printf("%f \n",ece[0].cgpa);
 }

// POINTER
 
 #include<stdio.h>
  
 struct student {
     int roll;
     float cgpa;
     char name[100];
 };
 int main(){
     struct student s1={1663,9.3,"SAFAL"};
     struct student *ptr=&s1;
     printf("%s",(*ptr).name);
      printf("%d",ptr->roll);
     return 0;
     
 }