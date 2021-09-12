/* FUNCTIONS

        Function are used to divide a large c program into smaller
        pieces.
        A Function can be called multiple times to provide reusability
        and modularity to program.

*/
#include<stdio.h>
show()
{
    printf("\n First Function!");
}
main()
{
    printf(" Before");
    show();
    printf("\n After");
}

