/* DYNAMIC MEMORY ALLOCATION

            This function is used to reallocate numbers of bytes of memory to existing pointer variable
         while calling the realloc function.

First Function = REALLOC
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
    int *arr;
    int i,n1,n2;
    printf("Enter size of Array : ");
    scanf("%d",&n1);
    arr = (int*)malloc(n1*sizeof(int));  // MALLOC FUNCTION
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
    printf("Enter Additional Size : ");
    scanf("%d",&n2);
    arr= (int*)realloc(arr,n2*sizeof(int));  //REALLOC FUNCTION
    printf("Enter Array : \n");
    for(i=n1; i<n1+n2; i++)
    {
        scanf("%d",arr+i);
    }
    printf("Your Array : ");
    for(i=0; i<n1+n2; i++)
    {
        printf("\n%d",*(arr+i));
    }


}

