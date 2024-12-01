// PROGRAM TO PRINT THE SUM UPTO N AND PRINT IN REVERSE ORDER BY USING ONLY ONE FOR LOOP

#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1,j=n;i<=n && j>=1;i++,j--){
        sum=sum+i;
        printf("%d \n",j);
    }
    printf("SUM IS %d \n",sum);
    return 0;
}