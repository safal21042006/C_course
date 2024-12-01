// program of print the sum of first n natural numbers

// #include<stdio.h>
// int main(){
//     int n;
//     printf("ENTER NUMBER");
//     scanf("%d",&n);
//     int sum = 0;
//     for(int i=1;i<=n;i++){
//         sum = sum + i;
//     }
//         printf("sum is %d",sum);
    
//     return 0;
// }


// program of print the sum of first n natural numbers and in reverse order

#include<stdio.h>
// program of print the sum of first n natural numbers and in reverse order

#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
        printf("sum is %d \n",sum);
        for(int i=n;i>=1;i--){
            printf("%d \n",i);
        }
        
    
    return 0;
}