// Program to take continuous value using array
#include<stdio.h>
int main(){
    int aadhar[5];
    
    // INPUT 
    int *ptr=&aadhar[0];
    for(int i=0;i<5;i++){
        printf("%d index:",i);
        scanf("%d",(ptr+i));
    }
    // OUTPUT
    
    for(int i=0;i<5;i++){
        printf("%d index=%d\n",i,*(ptr+i));
    }
    return 0;
    
}

OR 
// Program to take continuous value using array
#include<stdio.h>
int main(){
    int aadhar[5];
    
    // INPUT 
    int *ptr=&aadhar[0];
    for(int i=0;i<5;i++){
        printf("%d index:",i);
        scanf("%d",&aadhar[i]);
    }
    // OUTPUT
    
    for(int i=0;i<5;i++){
        printf("%d index=%d\n",i,aadhar[i]);
    }
    return 0;
    
}