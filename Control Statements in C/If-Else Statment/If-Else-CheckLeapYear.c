#include<stdio.h>
main()
{
    int year;
    printf("Enter a Year:");
    scanf("%d",&year);
    if((year%4==0)&&(year%100!=0)||(year%400==0))
    {
        printf("%d is a Leap year!",year);
    }
    else
    {
        printf("%d is not a leap year!",year);
    }
}
