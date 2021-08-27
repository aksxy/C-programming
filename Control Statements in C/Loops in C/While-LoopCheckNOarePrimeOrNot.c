#include<stdio.h>
main()
{
    int n,i;
    printf("Enter Number : ");
    scanf("%d",&n);
    i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            printf("Not Prime Number!");
            break;
        }
        i=i+1;
    }
    if(i==n)
    {
        printf("Prime Number!");
    }
}
