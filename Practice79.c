// WRITE A FUNCTION TO COUNT NUMBER OF ODD NUMBER IN AN ARRAY

#include<stdio.h>
void countodd(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5,6};
    countodd(arr,6);
    }


void countodd(int arr[],int n){
    int count=0;
    for(int i=0;i<6;i++){
        if(arr[i]%2!=0){
        count+=1;
        
    }
    }
     printf("COUNT IS %d",count);
        
}