#include<stdio.h>
main()
{
    char fname[5];
    int i;
    printf("Enter Your Name : ");
    for(i=0; i<5; i++)
    {
        scanf("%c",&fname[i]);
    }
    printf("Your Name is : ");
    for(i=0; i<5; i++)
    {
        printf("%c",fname[i]);
    }
}
