#include<stdio.h>
main()
{
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);

    switch(age)
    {
    case 3:
        printf("The Age Is 3");
        break;

    case 13:
        printf("The Age Is 13");
        break;

    case 23:
        printf("The Age Is 23");
        break;

    default:
        printf("The Age Is Not 3,13 or 23!");
        break;
    }
}
