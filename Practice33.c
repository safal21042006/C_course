// PROGRAM TO GIVE GRADES 
// PRACTICE QUETSIONS 
# include<stdio.h>
int main(){
    int marks;
    printf("ENTER MARKS:");
    scanf("%d",&marks);
    
    if(marks>=30 && marks<70){
        printf("B");
    }else if(marks>=70 && marks<90){
        printf("A");
            }else if(marks>=90 && marks<=90){
                printf("A+");
            }else if(marks<30){
                printf("C");
            }
            return 0;
}