#include<stdio.h>
int main()
{
    int year;
    printf("enter the value of year ");
    scanf("%d",&year);
    if (year%4==0 && year%400==0 || year%100!=0)
    {
        printf("leap");
    }
    else
    {
        printf("not leap");
    }
    } 