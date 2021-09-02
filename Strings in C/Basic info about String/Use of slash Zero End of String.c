#include<stdio.h>
main()
{
    char arr[5];
    int i=0;
    printf("Enter your name : ");
    scanf("%s",arr);
    while(arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
}

