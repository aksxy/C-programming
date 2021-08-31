#include<stdio.h>
main()
{
    int a=10;
    int *p=&a;
    int *p2=NULL;

    printf("The Address of Pointer is %d\n",&p);
    printf("The Address of a is %d\n",&a);
    printf("The Address of a is %d\n",p);
    printf("The Address of some Garbage is %d\n",p2);
    printf("The Address of a is %d\n",*p);
    printf("The Address of a is %d\n", a );

}
