// WRITE A FUNCTION TO COUNT THE MULTIPLE OF 5
#include<stdio.h>
void count(int arr[],int n);

int main(){
    int arr[]={5,10,15,22,25,65,77,87,78,98};
    count( arr,10);
}

void count(int arr[],int n){
    int  count=0;
    for(int i=0;i<10;i++){
        if(arr[i]%5 ==0){
            count+=1;
        }
    }
    printf("COUNT IS %d",count);
}


// WRITE A FUNCTION TO COUNT THE MULTIPLE OF 7
#include<stdio.h>
void count(int arr[],int n);
int main(){
    int arr[]={7,14,21,28,36,26,76};
    count(arr,7);
     printf("%d",*(arr+2));
}
void count(int arr[],int n){
    int count=0;
    for(int i=0;i<7;i++){
        if(arr[i]%7==0){
            count+=1;
        }
    }
    printf("%d",count);
}
/* OUTPUT
4 
21
*/