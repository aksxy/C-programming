#include<stdio.h>
main()
{
    int n,t=1,i=1;
    printf("Enter Number For Factorial Value : ");
    scanf("%d",&n);
    while(i<=n)
    {
        t=t*i;
        i=i+1;
    }
    printf("%d",t);
}
