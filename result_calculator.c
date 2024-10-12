#include <stdio.h>

int main(){
    int marks1,marks2,marks3 ;
    printf("enter value of makrs 1\n");
    scanf("%d",&marks1);
    printf("enter value of makrs 2\n");
    scanf("%d",&marks2);
    printf("enter value of makrs 3\n");
    scanf("%d",&marks3);

    if (marks1<=33 || marks2<=33 || marks3<=33)
    {
       printf("u are failed due to less marks in individual subject\n");
    }
    else if ((marks1+marks2+marks3)/3 <60)
    {
        printf("u have failed due to less marks \n");
    }
    else
    {
        printf(" u have passed the test\n");
    }
    
    
    
    
    return 0;
} //yoiu can calculate your result for three subject with specific value
