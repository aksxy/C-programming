#include<stdio.h>
main()
{
    int a,b;
    printf("Enter Number:");
    scanf("%d",&a);
    b=a%2;
    if(b==0)
    {
        printf("Even")
    }
    else
    {
        printf("Odd");
    }
}
