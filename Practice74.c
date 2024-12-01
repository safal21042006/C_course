// WAP TO ENTER PRICE OF 3 ITEMS AND PRINT THEIR FINAL COST WITH GST

#include<stdio.h>
int main(){
    int price[3];
    printf("ENTER PRICE OF 3 ITEMS");
    scanf("%d%d%d",&price[0],&price[1],&price[2]);
    float finalprice1=price[0]+(0.18*price[0]);
    float finalprice2=price[1]+(0.18*price[1]); 
    float finalprice3=price[2]+(0.18*price[2]);
    printf("FINAL PRICE OF 1ST ITEM:%f\n FINAL PRICE OF 2ND ITEM:%f \n FINAL PRICE OF 3RD ITEM %f",finalprice1,finalprice2, finalprice3);

}