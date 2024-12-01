// WRITE A FUNCTION TO REVERSE AN ARRAY
#include<stdio.h>
void reverse(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    printf("REVERSE OF STRING: \n");
    reverse(arr,10);
}
void reverse(int arr[],int n){
    for(int i=n-1;i>=0;i--){
               printf(" %d \n",arr[i]);
    }
     
}
