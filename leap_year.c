#include <stdio.h>

int main(){
    int year;
    printf("inter year: ");
    scanf("%d",&year);

    if ((year %4==0 && year%100!=0) || year%400==0)
    {
     printf("THI IS LEAP YEAR ");

    }
    else
    printf("this is not leap year");
        
    
    return 0;
}
