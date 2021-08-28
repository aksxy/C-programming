#include<stdio.h>
main()
{
    char arr[5],arr1[5];
    int i;
    printf("Enter Character : \n");
    for(i=0; i<5; i++)
    {
        scanf("%c",&arr[i]);
    }
    for(i=0; i<5; i++)
    {
        arr1[i]=arr[i];
    }
    printf("Your Characters : \n");
    for(i=0; i<5; i++)
    {
        printf("\n %c",arr1[i]-32);
    }
}
