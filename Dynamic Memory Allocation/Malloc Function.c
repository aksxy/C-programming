/* DYNAMIC MEMORY ALLOCATION

            This function is used to allocate numbers of bytes of memory. while calling this Function
        we have to specify number of bytes of memory required by User.

First Function = MALLOC
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
    int *arr;
    int i,n;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    arr = (int*)malloc(n*4);  // MALLOC FUNCTION
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


}

