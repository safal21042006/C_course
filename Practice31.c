// NESTED LIST

# include<stdio.h>
int main(){
    int number;
    printf("enter number:");
    scanf("%d",&number);
    
    if(number>=0){
        printf("NUMBER IS POSITIVE \n");
        if(number%2==0){
            printf("NUMBER IS EVEN");
        }else{
            printf("NUMBER IS ODD");
        }
    }else{
        printf("NUMBER IS NEGATIVE");
    }
    return 0;
}
