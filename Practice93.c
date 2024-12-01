// ques 1 pattern printing
/* 
*
**
***
****
***** */
#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER OF ROWS YOU WANT TO PRINT THE PATTERN:");
    scanf("%d",&n);
     for(int i=1;i<=n;i++){ //rows
         for(int j=1;j<=i;j++){ //columns
             printf("*");
         }
         printf("\n");
     }
     return 0;
}

// ques 2 pattern printing
/*
*****
****
***
**
* */
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ //rows
        for(int j=n;j>=i;j--){ //columns
            printf("*");
            }
            printf("\n");
        }
        return 0;
}



// QUES 3
// SPACE IN LEFT SIDE OF PATTERN
/* 
     *
    **
   ***
  ****
*/

// #include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){ // ROWS 
        for(int j=i;j<5;j++){  // SPACE
            printf(" ");
        }
            for(int k=1;k<=i;k++){ // COLUMNS
                printf("*");
            }
            printf("\n");
        
    }
    return 0;
}

// QUES 4
/* 
*****
 ****
  ***
   **
    *
*/

#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        for(int k=i;k<=5;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



// QUES 5
/*
*****
*****
*****
*****
*****
*/


// #include<stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             printf("*");
//         }
//         printf("\n");
        
//     }
//     return 0;
// }

//ques 6
/*
*****
*   *
*   *
*   *
*   *
*****
*/

#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;i<=5;j++){
            if(i==1||i==5||j==1||j==5){
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
}

// ques 7
/* 
1
22
333
4444
55555
*/
#include<stdio.h>
int main(){
    int n=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",n);
        }
        printf("\n");
        n++;
    }
}



// ques 8
/* 
1
12
123
1234
12345
*/
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}



// ques 9
/* 
1
23
456
789
101112

*/
#include<stdio.h>
int main(){
    int count=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",count);
            count++; ;
        }
        printf("\n");
    }
}

// QUES10
/* 
A
B C
D E F
G H I J 
K L M N O
*/

#include<stdio.h>
int main(){
    char count='A';
    for(char i='A';i<='E';i++){
        for(char j='A';j<=i;j++){
            printf("%c ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}



// ques 11
/* 
A
BB
CCC
DDDD
EEEEE */

#include<stdio.h>
int main(){
    char ch='A';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%c\t",ch);
        }
        ch++;
        printf("\n");
    }
}


// ques 11
/* 
A
A B
A B C
A B C D
A B C D E 
A B C D E F 
*/

#include<stdio.h>
int main(){
       for( char i=65;i<=70;i++){
        for(char j=65;j<=i;j++){
            printf("%c\t",j);
        }
        printf("\n");
    }
    return 0;
}


// QUES 12
/* 
I
IN
IND
INDI
INDIA
*/
#include<stdio.h>
#include<string.h>
int main(){
    int len;
    char str[]="SAFAL NIGAM";
    len=strlen(str);
    for(int i=0;i<len;i++){
        for(int j=0;j<=i;j++){
            printf("%c",str[j]);
        }
        printf("\n");
    }
}

// ques 13
/*
   *
  * *
 * * *
* * * *
*/

#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){         // ROWS
        for(j=5;j>i;j--){   // SPACE IN LEFT
        printf(" ");
        }
            for(k=1;k<=i;k++){  // PRINT STAR ,SPACE IN LOWER OF STAR,RIGHT SIDE 
                printf("* ");
            }
            printf("\n");
    }
}


// ques 14
/*
   *
  ***
 *****
*******
*/

#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){         // ROWS
        for(j=5;j>i;j--){   // SPACE IN LEFT
        printf(" ");
        }
            for(k=1;k<=2*i-1;k++){  // in place of space in lower star we print star 
                printf("*");
            }
            printf("\n");
    }
}



