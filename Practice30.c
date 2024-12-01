/* conditional operator
BY USING SWITCH OPERATOR*/
# include<stdio.h>
int main(){
    int day; // 1-MONDAY 2-TUESDAY 3-WEDNESDAY 4- THURSDAY 5-FRIDAY 6.....
    printf("enter day no");
    scanf("%d",&day);
    
    switch(day){
        case 1 : printf("monday \n");
        break;
        case 2 : printf("tuesay \n");
        break;
        case 3 : printf("wednesday \n");
        break ;
        case 4 : printf("thursday \n");
        break;
        case 5 : printf("friday \n");
        break;
        case 6 : printf("saturday \n");
        break;
        case 7 : printf("sunday \n");
        break;
        default: printf("not a valid day");
    } 
    return 0;
}

