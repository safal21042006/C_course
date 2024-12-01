// by for loop

// #include<stdio.h>
// int main(){
//     int n;
//     printf("ENTER THE NUMBER");
//     scanf("%d",&n);
    
//     for(int i=0;i<=n;i++){
//         printf("%d \n",i);
//     }
//     return 0;
// }


// by while loop
// PROGRAM TO PRINT THE NUMBER FROM 0 TO n,if n is given by user

// by while loop

#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    
    int i=0;
    while(i<=n){
        printf("%d \n",i);
        i++;
    }
    
    return 0;
}