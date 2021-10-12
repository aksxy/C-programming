#include<stdio.h>
#define AND &&
#define SMALL printf("Small")
#define COND1 x>=65 AND x<=90
#define IF if
main()
{
    char ch;
    int x;
    printf("enter Char : ");
    scanf("%c",%ch);
    IF(COND1)
    {
        printf("Capital");
    }
    else if(x>=97 AND x<=122)
    {
        SMALL;
    }
}
