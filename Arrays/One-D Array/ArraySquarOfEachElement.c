#include<stdio.h>
main()
{
    int arr[5];
    int i,ans;
    printf("Enter Array : \n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your Array : \n");
    for(i=0; i<5; i++)
    {
        ans=arr[i]*arr[i];

        printf("\n %d",ans);
    }

}
