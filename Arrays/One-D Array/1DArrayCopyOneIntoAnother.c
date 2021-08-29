#include<stdio.h>
main()
{
    int arr[5],arr1[5];
    int i;
    printf("Enter Array : \n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0; i<5; i++)
    {
        arr[i]=arr1[i];
    }
        printf("Your Array : \n");
        for(i=0; i<5; i++)
        {
            printf("\n %d",arr1[i]);
        }
    }
