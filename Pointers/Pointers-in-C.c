#include<stdio.h>
main()
{
    int a=5;
    int *p;
    p=&a;
    printf("%d\n",&a);
    printf("%d\n",*p);
    printf("%d",p);
}
