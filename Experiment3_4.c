//4.	Print the given days in years-month-days format. E.g. 396 days = 1 year, 1 month, 1 day
#include<stdio.h>

int main(){
    int day,y1,m,d;
    printf("Enter the number of days ");
    scanf("%d",&day);
    y1= day/365;
    m=day%365/30;
    d=day-(y1*365+m*30);
    printf("%d days = %d year, %d month, %d day",day,y1,m,d);




    return 0;
}