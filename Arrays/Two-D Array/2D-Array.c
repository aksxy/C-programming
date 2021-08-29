#include<stdio.h>
main()
{
    int arr[3][3];
    int i,j;
    printf("Enetr Your Array : \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Your Array : \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d",arr[j][i]);
        }
        printf("\n");
    }
}
