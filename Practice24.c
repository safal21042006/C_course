// PRINT 1 IF NUMBER IS TWO DIGIT OTHERWISE 0

#include<stdio.h>
int main() {
    int x;
    printf("ENTER NUMBER");
    scanf("%d",&x);
    printf("%d",x>9&&x<100);
    
    return 0;
}