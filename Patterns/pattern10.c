#include<stdio.h>
main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%c",j+96);
        }
        printf("\n");
    }
}
