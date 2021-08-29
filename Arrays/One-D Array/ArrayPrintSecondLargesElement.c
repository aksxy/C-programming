#include<stdio.h>
main()
{
    int arr[5];
    int i,max,max2;
    printf("Enter Array : \n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0; i<5; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("Max Item is : %d",max);
    max2=arr[0];
    for(i=0; i<5; i++)
    {
        if(arr[i]>max2 && arr[i]!=max)
        {
            max2=arr[i];
        }
    }
    printf("\nMex Second item is : %d",max2);
}
