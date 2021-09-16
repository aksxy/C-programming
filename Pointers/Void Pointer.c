/* VOID POINTER

             Void pointer is generalize pointer means that it can store address of any data type
         variable. if we don't no what type of pointer whear using then we used VOID POINTER.
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
    int x;
    char y;
    float z;
    void *p;  //VOID POINTER
    printf("%u\n",&x);
    printf("%u\n",&y);
    printf("%u\n",&z);
    p=&x;
    printf("\n%u\n",p);
    p=&y;
    printf("%u\n",p);
    p=&z;
    printf("%u\n",p);
}
