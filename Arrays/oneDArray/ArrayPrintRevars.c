#include<stdio.h>
main()
{
    int arr[5];
    int i;
    printf("Enter Array : \n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your array : \n");
    for(i=4; i>=0; i--)
    {
        printf("\n %d",arr[i]);
    }
}
