/* DYNAMIC MEMORY ALLOCATION

                  It is also used to allocate the memory like malloc and calloc is that takes two argument
                  first is number of items we need and second is size of each item.

First Function = CALLOC
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
    int *arr;
    int i,n1;
    printf("Enter size of Array : ");
    scanf("%d",&n1);
    arr = (int*)calloc(n1,sizeof(int));  // CALLOC FUNCTION
    printf("Enter Array : \n");
    for (i=0; i<n1; i++)
    {
        scanf("%d",arr+i);
    }
    printf("Your Array : \n");
    for(i=0; i<n1; i++)
    {
        printf("%d \n",*(arr+i));
    }

    free(arr);

}

