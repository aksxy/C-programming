// CALCULATOR

#include<stdio.h>
int a,b,c;
void value()
{
    printf("\nEnter First Number : ");
    scanf("%d",&a);
    printf("Enter Second Number : ");
    scanf("%d",&b);
}
void aksx()
{
    int options;
    printf("\n\nSelect Your Option : ");
    scanf("%d",&options);

    switch(options)
    {
    case 1:
        value();
        c=a+b;
        break;

    case 2:
        value();
        c=a-b;
        break;

    case 3:
        value();
        c=a*b;
        break;
    case 4:
        value();
        c=a/b;
        break;

    default:
        printf("It Is Not A option!");
        break;
    }
}
void print()
{
    printf("\nAns is : %d",c);
}
void main()
{   printf("=====CALCULATOR=====");
    printf("\n\n 1 for +");
    printf("\n 2 for -");
    printf("\n 3 for *");
    printf("\n 4 for /");


    aksx();
    print();
}
