#include<stdio.h>
main()
{
    int arr[10];
    int i,noe=0,nod=0;
    printf("Enter a Numbers : \n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<10; i++)
    {
        if(arr[i]%2==0)
        {
            noe++;
        }
        else
        {
            nod++;
        }
    }
    printf("\n Number of Even : %d",noe);
    printf("\n Number of Odd : %d",nod);
}
