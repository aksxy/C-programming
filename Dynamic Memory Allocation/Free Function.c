/* DYNAMIC MEMORY ALLOCATION

            When we allocate the memory by using malloc or any other Function then we
        must free the memory after completing the work. to a free the memory when we
        want to use free(); Function.

First Function = FREE
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
    int *arr;
    int i,n;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    arr = (int*)malloc(n*4);
    printf("Enter Array : \n");
    for (i=0; i<n; i++)
    {
        scanf("%d",arr+i);
    }
    printf("Your Array : \n");
    for(i=0; i<n; i++)
    {
        printf("%d \n",*(arr+i));
    }

    free(arr);   // FREE FUNCTION

}
