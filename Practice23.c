// PROGRAM IF IT'SUNDAY AND IT'S SNOWING
// #include<stdio.h>
// int main() {
//     int issunday=1;
//     int issnowing=O;                                   ANSWER=0
//     printf("%d \n",issunday && issnowing);
//     return 0;
// }

// PROGRAM IF IT'S SUNDAY OR IT'S SNOWING
// ANSWER= 1
// #include<stdio.h>
// int main() {
//     int issunday=1;
//     int issnowing=0;
//     printf("%d \n",issunday || issnowing);                
//     return 0;
// }

// USING THE NOT OPERATOR
#include<stdio.h>
int main() {
    int issunday=1;
    int issnowing=0;
    printf("%d \n",!(issunday && issnowing));
    return 0;
}