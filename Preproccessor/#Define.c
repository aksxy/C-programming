/*MACRO
       it is used to short hand code in the C program using MACROS you can Create your own
    language we can create Macros using #define.
*/
#include<stdio.h>
#define MAX 25

main()
{
    int i;
    for(i=0;i<MAX;i++)
    {
        printf("\n%d",i);
    }
}
