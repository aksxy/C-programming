#include<stdio.h>
main()
{
    char fname[15];
    printf("Enter Your Name : ");
    gets(fname);     // You also get input using Ex:- scanf("%s",fname);
    printf("Hello %s",fname);
}

