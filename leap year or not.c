#include<stdio.h>
void main()
{
    int year;
    printf("enter year");
    scanf("%d",&year);
    if((year%400==0)||(year%4==0&&year%100!=0))
    printf("%d Leap year",year);
    else
    printf("%d Not a Leap year",year);
    }