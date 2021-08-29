#include<stdio.h>
main()
{
    int arr[5];
    int i,sum=0;
    printf("Enter Array : \n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<5; i++)
    {
        sum=sum+arr[i];
    }
    printf("Addition is : %d",sum);
}
