#include<stdio.h>
main()
{
    int arr[5];
    int i;
    printf("Enter Array : ");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your Array : ");
    for(i=0; i<5; i++)
    {
        printf("\n%d",arr[i]);
    }
}
