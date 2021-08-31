#include <stdio.h>
main()
{
    int a=5;
    int *q,**z;
    q=&a;
    printf("\n%d",q);
    printf("\n%d",*q);

    z=&q;

    printf("\n%d",z);
    printf("\n%d",*z);
    printf("\n%d",**z);
}
