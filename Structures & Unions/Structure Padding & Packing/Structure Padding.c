/* STRUCTURE PADDING

   When memory is allocate to the Structure variable the structure Padding
   may be used.
*/

#include<stdio.h>
struct test
{
    char x;
    char y;
    int z;
} aksxy;
main()
{
    printf("%d",sizeof(aksxy));
}

