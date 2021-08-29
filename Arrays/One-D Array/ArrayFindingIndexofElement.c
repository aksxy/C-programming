#include<stdio.h>
main()
{
    int arr[5];
    int i,x;
    printf("Enter Array : \n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Element To Search : ");
    scanf("%d",&x);
    for(i=0; i<5; i++)
    {
        if(arr[i]==x)
        {
            printf("\n Index is %d",i);
            break;
        }
    }
}
