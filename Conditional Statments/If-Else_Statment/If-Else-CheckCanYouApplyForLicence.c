#include<stdio.h>
main()
{
    int age;
    printf("Enter your age:");
    sacnf("%d",&age);
    if(age>=18)
    {
        printf("You can apply for driving licence!");
    }
    else
    {
        printf("You can-not apply for driving licence!");
    }
}
