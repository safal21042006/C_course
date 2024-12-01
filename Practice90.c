// ENTER ADDRESS(HOUSE NO,BLOCK,CITY,STATE)OF 5 PEOPLE

#include<stdio.h>
#include<string.h>
struct address{
    int houseNo;
    char block[10];
    char city[49];
    char state[100];
};
int main(){
    struct address p1;
    p1.houseNo=400;
    strcpy(p1.block,"A");
    strcpy(p1.city,"banda");
    strcpy(p1.state,"Uttar pradesh");
    printf("PERSON 1 INFO:");
    printf("HOUSE NO: %d \n",p1.houseNo);
    printf("BLOCK :%s \n",p1.block);
     printf("CITY :%s \n",p1.city);
     printf("STATE :%s \n",p1.state);
    printf("\n");
    
    
    struct address p2;
    p2.houseNo=401;
    strcpy(p2.block,"B");
    strcpy(p2.city,"kanpur");
    strcpy(p2.state,"Uttar pradesh");
    printf("PERSON 2 INFO: \n");
    printf("HOUSE NO: %d \n",p2.houseNo);
    printf("BLOCK :%s \n",p2.block);
     printf("CITY :%s \n",p2.city);
     printf("STATE :%s \n",p2.state);
     
     printf("\n");
     
    struct address p3;
    p3.houseNo=402;
    strcpy(p3.block,"C");
    strcpy(p3.city,"lucknow");
    strcpy(p3.state,"Uttar pradesh");
    printf("PERSON 3 INFO: \n");
    printf("HOUSE NO: %d \n",p3.houseNo);
    printf("BLOCK :%s \n",p3.block);
     printf("CITY :%s \n",p3.city);
     printf("STATE :%s \n",p3.state);
     
     printf("\n");
    struct address p4;
    p4.houseNo=403;
    strcpy(p4.block,"B");
    strcpy(p4.city,"kanpur");
    strcpy(p4.state,"Uttar pradesh");
    printf("PERSON 4 INFO: \n");
    printf("HOUSE NO: %d \n",p4.houseNo);
    printf("BLOCK :%s \n",p4.block);
     printf("CITY :%s \n",p4.city);
     printf("STATE :%s \n",p4.state);
     
     printf("\n");
    struct address p5;
    p5.houseNo=404;
    strcpy(p5.block,"B");
    strcpy(p5.city,"kanpur");
    strcpy(p5.state,"Uttar pradesh");
    printf("PERSON 5 INFO: \n");
    printf("HOUSE NO: %d \n",p5.houseNo);
    printf("BLOCK :%s \n",p5.block);
     printf("CITY :%s \n",p5.city);
     printf("STATE :%s \n",p5.state);
}